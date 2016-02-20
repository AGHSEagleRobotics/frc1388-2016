#include "Vision.h"
#include "WPILib.h"
#define MINIMUM_AREA < 100
#define CAMERA_VIEW_ANGLE 46.857 //this is the measurement of the angle the camera can see in degrees

Vision::Vision(){

}

void Vision::setupCamera(){
	//setting up the camera variable
	camera = new AxisCamera("10.13.88.11");
	//setting the camera settings for the best possible transfer of data
	camera->WriteResolution(AxisCamera::kResolution_320x240);
	camera->WriteCompression(70);
	camera->WriteBrightness(50);
	camera->WriteMaxFPS(15);
	camera->WriteColorLevel(75);
}
//test

void Vision::AnalyzeParticle(){
	printf("Analyze Particle\n");
	img = camera->GetImage();

	bool isFresh = camera->IsFreshImage();
	if(isFresh){
		printf("Fresh\n");
	}else{
		printf("Not Fresh\n");
	}
	//TODO: add a portion where it deletes it if there are already particles
//	printf("\nHeight: %f\n", img->GetHeight());
	//define the parameters with which to analyze the image ie: green must be between 200-250
	binImg = img->ThresholdRGB(200, 255, 200, 255, 200, 255);
	//getting a fresh particle report
	//getting the particle report
	particleReport = binImg->GetOrderedParticleAnalysisReports();

	//printfs for testing purposes, determining if the particlereport does what I think.
//	printf("Number of particles: %d\n", particleReport->size());

	for(unsigned int i = 0; i < particleReport->size(); i++){
		if (particleReport->at(i).particleArea MINIMUM_AREA){
			particleReport->erase(particleReport->begin() + i);
			i--;
		}
	}

//	printf("New number of particles: %d\n", particleReport->size());

}
bool Vision::getParticleSide(){
	for (unsigned int i = 0; i < particleReport->size(); i++){

	}
	return true; //change later, keep for now
}

double Vision::getArea(){
	AnalyzeParticle();
	double area = 0;
	for(unsigned int i = 0; i < particleReport->size(); i++){
		if(particleReport->at(i).particleArea > area){
			area = particleReport->at(i).particleArea;
		}
	}
	return area;
}

double Vision::boundingRectArea(){
	double area = 0;
	double currentArea;
	for(unsigned int i = 0; i < particleReport->size(); i++){
		currentArea = particleReport->at(i).boundingRect.height * particleReport->at(i).boundingRect.width;
		if(currentArea > area){
			area = currentArea;
		}
	}
	return area;
}
