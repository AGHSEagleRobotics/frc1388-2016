// RobotBuilder Version: 2.0
//
// This file was generated by RobotBuilder. It contains sections of
// code that are automatically generated and assigned by robotbuilder.
// These sections will be updated in the future when you export to
// C++ from RobotBuilder. Do not put any code or make any change in
// the blocks indicating autogenerated code or it will be lost on an
// update. Deleting the comments indicating the section will prevent
// it from being updated in the future.


#include "MoveFlapper.h"
#define MAXENCODERVALUE 1000
// BEGIN AUTOGENERATED CODE, SOURCE=ROBOTBUILDER ID=CONSTRUCTOR

MoveFlapper::MoveFlapper(): Command() {
        // Use requires() here to declare subsystem dependencies
    // eg. requires(chassis);
    // BEGIN AUTOGENERATED CODE, SOURCE=ROBOTBUILDER ID=REQUIRES
    // END AUTOGENERATED CODE, SOURCE=ROBOTBUILDER ID=REQUIRES
}

    // END AUTOGENERATED CODE, SOURCE=ROBOTBUILDER ID=CONSTRUCTOR

// Called just before this Command runs the first time
void MoveFlapper::Initialize() {
	if (RobotMap::flapperFlapperBottomLimit->Get()){
		RobotMap::flapperFlapperEncoder->Reset();
	}
}

// Called repeatedly when this Command is scheduled to run
void MoveFlapper::Execute() {
	float FlapperYAxis = Robot::oi->getOperatorStick()->GetY();
	if(RobotMap::flapperFlapperTopLimit->Get() == 1){
		RobotMap::flapperFlapperEncoder->Reset();

		if(FlapperYAxis > 0){
			FlapperYAxis = 0;
		}
	}
	if(RobotMap::flapperFlapperBottomLimit->Get() == 1 && FlapperYAxis < 0 ){
		FlapperYAxis = 0;
	}
	if (RobotMap::flapperFlapperEncoder->Get() >= MAXENCODERVALUE && FlapperYAxis > 0){
		FlapperYAxis = 0;
	}
	if (RobotMap::flapperFlapperEncoder->Get() <= 0 && FlapperYAxis < 0){
		FlapperYAxis = 0;
	}

RobotMap::flapperFlapperMotor->Set(FlapperYAxis);
double flapperMotorEncoder = RobotMap::flapperFlapperEncoder->Get();
SmartDashboard::PutNumber("FlapperAngle",flapperMotorEncoder);
}

// Make this return true when this Command no longer needs to run execute()
bool MoveFlapper::IsFinished() {
    return false;
}

// Called once after isFinished returns true
void MoveFlapper::End() {

}

// Called when another command which requires one or more of the same
// subsystems is scheduled to run
void MoveFlapper::Interrupted() {
	End();
}