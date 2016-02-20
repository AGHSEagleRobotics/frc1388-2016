#include "Vision.h"
#include "WPILib.h"
Vision::Vision(){

}

void Vision::setupCamera(){
	//setting up the camera variable
	camera = new AxisCamera("169.254.223.9");
	//setting the camera settings for the best possible transfer of data
	camera->WriteResolution(AxisCamera::kResolution_320x240);
	camera->WriteCompression(70);
	camera->WriteBrightness(50);
	camera->WriteMaxFPS(15);
	camera->WriteColorLevel(75);
}

void Vision::AnalyzeParticle(){
	img = camera->GetImage();
	//define the parameters with which to analyze the image ie: green must be between 200-250
	binImg = img->ThresholdRGB(0, 100, 200, 255, 0, 255);
	//getting a fresh particle report

	particleReport = binImg->GetOrderedParticleAnalysisReports();

	printf("Number of particles: %f", particleReport->size());
	//printfs for testing purposes, determining if the particlereport does what I think.
}
