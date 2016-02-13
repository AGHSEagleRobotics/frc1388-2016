#include "RobotMap.h"

using namespace std;

class Vision{
	private:
	ColorImage * img;
	BinaryImage * binImg;
	AxisCamera * camera;
	vector<ParticleAnalysisReport> * particleReport;
	public:
	int AnalyzeParticle();
	Vision();
};
