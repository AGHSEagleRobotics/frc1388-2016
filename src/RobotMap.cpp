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
std::shared_ptr<CANTalon> RobotMap::ballIntakeShootMotor;
std::shared_ptr<DigitalInput> RobotMap::ballIntakeIntakeLimit;
std::shared_ptr<CANTalon> RobotMap::ballIntakeTreadMotor;
std::shared_ptr<AnalogInput> RobotMap::driveTrainPositionSetter;
std::shared_ptr<AnalogInput> RobotMap::driveTrainAutonDial;
std::shared_ptr<SpeedController> RobotMap::driveTrainFrontLeftTalon;
std::shared_ptr<SpeedController> RobotMap::driveTrainFrontRightTalon;
std::shared_ptr<SpeedController> RobotMap::driveTrainBackLeftTalon;
std::shared_ptr<SpeedController> RobotMap::driveTrainBackRightTalon;
std::shared_ptr<RobotDrive> RobotMap::driveTrainRobotDrive41;
std::shared_ptr<Encoder> RobotMap::driveTraindriveEncoder;
std::shared_ptr<AnalogGyro> RobotMap::driveTraindriveGyro;
std::shared_ptr<DigitalInput> RobotMap::flapperFlapperTopLimit;
std::shared_ptr<DigitalInput> RobotMap::flapperFlapperBottomLimit;
std::shared_ptr<Encoder> RobotMap::flapperFlapperEncoder;
std::shared_ptr<CANTalon> RobotMap::flapperFlapperMotor;

    // END AUTOGENERATED CODE, SOURCE=ROBOTBUILDER ID=ALLOCATION


std::shared_ptr<BuiltInAccelerometer> RobotMap::driveTrainAccelerometer;

void RobotMap::init() {
    // BEGIN AUTOGENERATED CODE, SOURCE=ROBOTBUILDER ID=CONSTRUCTORS
    LiveWindow *lw = LiveWindow::GetInstance();

    ballIntakeShootMotor.reset(new CANTalon(13));
    lw->AddActuator("BallIntake", "ShootMotor", ballIntakeShootMotor);
    
    ballIntakeIntakeLimit.reset(new DigitalInput(0));
    lw->AddSensor("BallIntake", "IntakeLimit", ballIntakeIntakeLimit);
    
    ballIntakeTreadMotor.reset(new CANTalon(17));
    lw->AddActuator("BallIntake", "TreadMotor", ballIntakeTreadMotor);
    
    driveTrainPositionSetter.reset(new AnalogInput(2));
    lw->AddSensor("DriveTrain", "PositionSetter", driveTrainPositionSetter);
    
    driveTrainAutonDial.reset(new AnalogInput(1));
    lw->AddSensor("DriveTrain", "AutonDial", driveTrainAutonDial);
    
    driveTrainFrontLeftTalon.reset(new Talon(3));
    lw->AddActuator("DriveTrain", "FrontLeftTalon", std::static_pointer_cast<Talon>(driveTrainFrontLeftTalon));
    
    driveTrainFrontRightTalon.reset(new Talon(0));
    lw->AddActuator("DriveTrain", "FrontRightTalon", std::static_pointer_cast<Talon>(driveTrainFrontRightTalon));
    
    driveTrainBackLeftTalon.reset(new Talon(2));
    lw->AddActuator("DriveTrain", "BackLeftTalon", std::static_pointer_cast<Talon>(driveTrainBackLeftTalon));
    
    driveTrainBackRightTalon.reset(new Talon(1));
    lw->AddActuator("DriveTrain", "BackRightTalon", std::static_pointer_cast<Talon>(driveTrainBackRightTalon));
    
    driveTrainRobotDrive41.reset(new RobotDrive(driveTrainFrontLeftTalon, driveTrainBackLeftTalon,
              driveTrainFrontRightTalon, driveTrainBackRightTalon));
    
    driveTrainRobotDrive41->SetSafetyEnabled(true);
        driveTrainRobotDrive41->SetExpiration(0.1);
        driveTrainRobotDrive41->SetSensitivity(0.5);
        driveTrainRobotDrive41->SetMaxOutput(1.0);

        driveTrainRobotDrive41->SetInvertedMotor(RobotDrive::kFrontRightMotor, true);
        driveTrainRobotDrive41->SetInvertedMotor(RobotDrive::kRearRightMotor, true);
    driveTraindriveEncoder.reset(new Encoder(3, 4, false, Encoder::k4X));
    lw->AddSensor("DriveTrain", "driveEncoder", driveTraindriveEncoder);
    driveTraindriveEncoder->SetDistancePerPulse(0.005);
    driveTraindriveEncoder->SetPIDSourceType(PIDSourceType::kRate);
    driveTraindriveGyro.reset(new AnalogGyro(0));
    lw->AddSensor("DriveTrain", "driveGyro", driveTraindriveGyro);
    driveTraindriveGyro->SetSensitivity(0.007);
    flapperFlapperTopLimit.reset(new DigitalInput(10));
    lw->AddSensor("Flapper", "FlapperTopLimit", flapperFlapperTopLimit);
    
    flapperFlapperBottomLimit.reset(new DigitalInput(6));
    lw->AddSensor("Flapper", "FlapperBottomLimit", flapperFlapperBottomLimit);
    
    flapperFlapperEncoder.reset(new Encoder(25, 24, false, Encoder::k4X));
    lw->AddSensor("Flapper", "FlapperEncoder", flapperFlapperEncoder);
    flapperFlapperEncoder->SetDistancePerPulse(1.0);
    flapperFlapperEncoder->SetPIDSourceType(PIDSourceType::kRate);
    flapperFlapperMotor.reset(new CANTalon(12));
    lw->AddActuator("Flapper", "FlapperMotor", flapperFlapperMotor);
    


    // END AUTOGENERATED CODE, SOURCE=ROBOTBUILDER ID=CONSTRUCTORS

}
