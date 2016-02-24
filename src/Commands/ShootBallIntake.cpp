// RobotBuilder Version: 2.0
//
// This file was generated by RobotBuilder. It contains sections of
// code that are automatically generated and assigned by robotbuilder.
// These sections will be updated in the future when you export to
// C++ from RobotBuilder. Do not put any code or make any change in
// the blocks indicating autogenerated code or it will be lost on an
// update. Deleting the comments indicating the section will prevent
// it from being updated in the future.

#define  ZERO_MOTOR_VALUE	0
#include "ShootBallIntake.h"

// BEGIN AUTOGENERATED CODE, SOURCE=ROBOTBUILDER ID=CONSTRUCTOR

ShootBallIntake::ShootBallIntake(): Command() {
        // Use requires() here to declare subsystem dependencies
    // eg. requires(chassis);
    // BEGIN AUTOGENERATED CODE, SOURCE=ROBOTBUILDER ID=REQUIRES
	Requires(Robot::ballIntake.get());
    // END AUTOGENERATED CODE, SOURCE=ROBOTBUILDER ID=REQUIRES
}

    // END AUTOGENERATED CODE, SOURCE=ROBOTBUILDER ID=CONSTRUCTOR

// Called just before this Command runs the first time
void ShootBallIntake::Initialize() {

}

// Called repeatedly when this Command is scheduled to run
void ShootBallIntake::Execute() {
	if(RobotMap::ballIntakeIntakeLimit->Get() == 1){
	float throttleSpeed = Robot::oi->getOperatorStick()->GetThrottle();
		float scaledThrottle = (-.5*throttleSpeed)+.5;
			RobotMap::ballIntakeShootMotor->Set(scaledThrottle);// turns on shoot motor to pull in ball
			RobotMap::ballIntakeTreadMotor->Set(scaledThrottle);// turns on flapper tread motor to shoot ball
	}
}

// Make this return true when this Command no longer needs to run execute()
bool ShootBallIntake::IsFinished() {
	return false;
}

// Called once after isFinished returns true
void ShootBallIntake::End() {

}

// Called when another command which requires one or more of the same
// subsystems is scheduled to run
void ShootBallIntake::Interrupted() {
	End();
}
