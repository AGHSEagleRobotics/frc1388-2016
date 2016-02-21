#ifndef VISION_H
#define VISION_H


#include "RobotMap.h"

using namespace std;

class Vision{
	private:
	ColorImage * img;
	BinaryImage * binImg;
	AxisCamera * camera;
	vector<ParticleAnalysisReport> * particleReport;
	ParticleAnalysisReport biggestParticle;
	public:
	void setupCamera();
	void AnalyzeParticle();
	double getArea();
	double boundingRectArea();
	float getDistance();
	float getNormalized();
	Vision();
};

#endif
