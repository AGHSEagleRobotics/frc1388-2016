//#include "Vision.h"
//#include "WPILib.h"
//Vision::Vision(){
//	//setting up the camera variable
//	camera = new AxisCamera("169.254.223.9");
//	//setting the camera settings for the best possible transfer of data
//	camera->WriteResolution(AxisCamera::kResolution_320x240);
//	camera->WriteCompression(70);
//	camera->WriteBrightness(50);
//	camera->WriteMaxFPS(15);
//	camera->WriteColorLevel(75);
//}
//
//int Vision::AnalyzeParticle(){
//	img = camera->GetImage();
//	//define the parameters with which to analyze the image ie: green must be between 200-250
//	binImg = img->ThresholdRGB(200, 255, 200, 255, 200, 255);
//	//getting a fresh particle report
//	if(!(particleReport->empty())){
//		delete particleReport;
//	}
//	//binImg->Write("binImg.mjpeg");
//	//getting the particle report
//	particleReport = binImg->GetOrderedParticleAnalysisReports();
//	//printfs for testing purposes, determining if the particlereport does what I think.
//	printf("Height: %d", particleReport->at(0));
//	printf("Width: %d", particleReport->at(1));
//	printf("Area: %d", particleReport->at(8));
//}
