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
	public:
	void setupCamera();
	void AnalyzeParticle();
	double getArea();
	double boundingRectArea();
	bool getParticleSide();
	Vision();
};

#endif
