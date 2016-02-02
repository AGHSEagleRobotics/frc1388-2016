// RobotBuilder Version: 2.0
//
// This file was generated by RobotBuilder. It contains sections of
// code that are automatically generated and assigned by robotbuilder.
// These sections will be updated in the future when you export to
// C++ from RobotBuilder. Do not put any code or make any change in
// the blocks indicating autogenerated code or it will be lost on an
// update. Deleting the comments indicating the section will prevent
// it from being updated in the future.


#include "RobotMap.h"
#include "LiveWindow/LiveWindow.h"


// BEGIN AUTOGENERATED CODE, SOURCE=ROBOTBUILDER ID=ALLOCATION
std::shared_ptr<SpeedController> RobotMap::ballIntakePrepMotor;
std::shared_ptr<SpeedController> RobotMap::ballIntakeShootMotor;
std::shared_ptr<DigitalInput> RobotMap::ballIntakeLowerLimit;
std::shared_ptr<DigitalInput> RobotMap::ballIntakeUpperLimit;
std::shared_ptr<SpeedController> RobotMap::flapperFlapperMotor;
std::shared_ptr<DigitalInput> RobotMap::flapperFlapperTopLimit;
std::shared_ptr<DigitalInput> RobotMap::flapperFlapperBottomLimit;
std::shared_ptr<Encoder> RobotMap::flapperFlapperEncoder;
std::shared_ptr<SpeedController> RobotMap::ballIntakeTreadMotor;
std::shared_ptr<SpeedController> RobotMap::driveTrainFrontLeftTalon;
std::shared_ptr<SpeedController> RobotMap::driveTrainFrontRightTalon;
std::shared_ptr<SpeedController> RobotMap::driveTrainBackLeftTalon;
std::shared_ptr<SpeedController> RobotMap::driveTrainBackRightTalon;
std::shared_ptr<RobotDrive> RobotMap::driveTrainRobotDrive41;
std::shared_ptr<Encoder> RobotMap::driveTraindriveEncoder;

    // END AUTOGENERATED CODE, SOURCE=ROBOTBUILDER ID=ALLOCATION

void RobotMap::init() {
    // BEGIN AUTOGENERATED CODE, SOURCE=ROBOTBUILDER ID=CONSTRUCTORS
    LiveWindow *lw = LiveWindow::GetInstance();

    ballIntakePrepMotor.reset(new Talon(7));
    lw->AddActuator("BallIntake", "PrepMotor", (Talon&) ballIntakePrepMotor);
    
    ballIntakeShootMotor.reset(new Talon(8));
    lw->AddActuator("BallIntake", "ShootMotor", (Talon&) ballIntakeShootMotor);
    
    ballIntakeLowerLimit.reset(new DigitalInput(4));
    lw->AddSensor("BallIntake", "LowerLimit", ballIntakeLowerLimit);
    
    ballIntakeUpperLimit.reset(new DigitalInput(5));
    lw->AddSensor("BallIntake", "UpperLimit", ballIntakeUpperLimit);
    
    ballIntakeTreadMotor.reset(new TalonSRX(5));
    lw->AddActuator("BallIntake", "TreadMotor", (TalonSRX&) ballIntakeTreadMotor);
    
    driveTrainFrontLeftTalon.reset(new Talon(0));
    lw->AddActuator("DriveTrain", "FrontLeftTalon", (Talon&) driveTrainFrontLeftTalon);
    
    flapperFlapperTopLimit.reset(new DigitalInput(0));
    lw->AddSensor("Flapper", "FlapperTopLimit", flapperFlapperTopLimit);
    
    flapperFlapperBottomLimit.reset(new DigitalInput(1));
    lw->AddSensor("Flapper", "FlapperBottomLimit", flapperFlapperBottomLimit);
    
    flapperFlapperEncoder.reset(new Encoder(2, 3, false, Encoder::k4X));
    lw->AddSensor("Flapper", "FlapperEncoder", flapperFlapperEncoder);
    flapperFlapperEncoder->SetDistancePerPulse(1.0);
    flapperFlapperEncoder->SetPIDSourceType(PIDSourceType::kRate);


    driveTrainBackLeftTalon.reset(new Talon(3));
    lw->AddActuator("DriveTrain", "BackLeftTalon", (Talon&) driveTrainBackLeftTalon);
    
    driveTrainBackRightTalon.reset(new Talon(4));
    lw->AddActuator("DriveTrain", "BackRightTalon", (Talon&) driveTrainBackRightTalon);
    
    driveTrainRobotDrive41.reset(new RobotDrive(driveTrainFrontLeftTalon, driveTrainBackLeftTalon,
              driveTrainFrontRightTalon, driveTrainBackRightTalon));
    
    driveTrainRobotDrive41->SetSafetyEnabled(true);
        driveTrainRobotDrive41->SetExpiration(0.1);
        driveTrainRobotDrive41->SetSensitivity(0.5);
        driveTrainRobotDrive41->SetMaxOutput(1.0);

    driveTraindriveEncoder.reset(new Encoder(8, 9, false, Encoder::k4X));
    lw->AddSensor("DriveTrain", "driveEncoder", driveTraindriveEncoder);
    driveTraindriveEncoder->SetDistancePerPulse(0.05234);
    driveTraindriveEncoder->SetPIDSourceType(PIDSourceType::kRate);


    // END AUTOGENERATED CODE, SOURCE=ROBOTBUILDER ID=CONSTRUCTORS
}
