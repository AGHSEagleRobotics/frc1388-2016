// RobotBuilder Version: 2.0
//
// This file was generated by RobotBuilder. It contains sections of
// code that are automatically generated and assigned by robotbuilder.
// These sections will be updated in the future when you export to
// C++ from RobotBuilder. Do not put any code or make any change in
// the blocks indicating autogenerated code or it will be lost on an
// update. Deleting the comments indicating the section will prevent
// it from being updated in the future.


#include "Drive.h"
#include "../OI.h"
#include "../Vision.h"
#define DEADBAND 0.10
// BEGIN AUTOGENERATED CODE, SOURCE=ROBOTBUILDER ID=CONSTRUCTOR

Drive::Drive(): Command() {
        // Use requires() here to declare subsystem dependencies
    // eg. requires(chassis);
    // BEGIN AUTOGENERATED CODE, SOURCE=ROBOTBUILDER ID=REQUIRES
	Requires(Robot::driveTrain.get());
    // END AUTOGENERATED CODE, SOURCE=ROBOTBUILDER ID=REQUIRES
}

    // END AUTOGENERATED CODE, SOURCE=ROBOTBUILDER ID=CONSTRUCTOR
float Drive::Deadband(float input){
	float ret;
	if (fabs(input) <= DEADBAND) ret = 0;
	else if (input > 0) ret = (input - DEADBAND) / (1 - DEADBAND);
	else if (input < 0) ret = (input + DEADBAND) / (1 - DEADBAND);
	else ret = input;
	return ret;
}
// Called just before this Command runs the first time
void Drive::Initialize() {
	visi.cameraSetup();
	RobotMap::driveTraindriveEncoder->Reset();
}

// Called repeatedly when this Command is scheduled to run
void Drive::Execute() {
	visi.AnalyzeParticle();
	float leftStickY = Deadband(Robot::oi->getLeftDriveStick()->GetY());
	float rightStickY = Deadband(Robot::oi->getRightDriveStick()->GetY());
	RobotMap::driveTrainRobotDrive41->TankDrive(leftStickY,rightStickY);

	//the following code is test code for Andrew G.
//	float leftgameStickY = Deadband(Robot::oi->getLeftDriveStick()->GetY());
//	float rightgameStickThrottle = Deadband(Robot::oi->getLeftDriveStick()->GetThrottle());
//	 RobotMap::driveTrainRobotDrive41->TankDrive(leftgameStickY, rightgameStickThrottle);



}

// Make this return true when this Command no longer needs to run execute()
bool Drive::IsFinished() {
    return false;
}

// Called once after isFinished returns true
void Drive::End() {

}

// Called when another command which requires one or more of the same
// subsystems is scheduled to run
void Drive::Interrupted() {
	End();
}
