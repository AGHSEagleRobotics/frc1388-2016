// RobotBuilder Version: 2.0
//
// This file was generated by RobotBuilder. It contains sections of
// code that are automatically generated and assigned by robotbuilder.
// These sections will be updated in the future when you export to
// C++ from RobotBuilder. Do not put any code or make any change in
// the blocks indicating autogenerated code or it will be lost on an
// update. Deleting the comments indicating the section will prevent
// it from being updated in the future.


#include "OI.h"

// BEGIN AUTOGENERATED CODE, SOURCE=ROBOTBUILDER ID=INCLUDES
#include "SmartDashboard/SmartDashboard.h"
#include "Commands/AutonDrive.h"
#include "Commands/AutonTurn.h"
#include "Commands/AutonomousCommand.h"
#include "Commands/CollectBallIntake.h"
#include "Commands/Drive.h"
#include "Commands/FlapperHighSetpoint.h"
#include "Commands/FlapperLowSetpoint.h"
#include "Commands/MoveFlapper.h"
#include "Commands/PrepBallIntake.h"
#include "Commands/RetractBallIntake.h"
#include "Commands/ShootBallIntake.h"


    // END AUTOGENERATED CODE, SOURCE=ROBOTBUILDER ID=INCLUDES

OI::OI() {
    // Process operator interface input here.
    // BEGIN AUTOGENERATED CODE, SOURCE=ROBOTBUILDER ID=CONSTRUCTORS
    rightDriveStick.reset(new Joystick(2));
    
    leftDriveStick.reset(new Joystick(1));
    
    operatorStick.reset(new Joystick(0));
    
    flapperHighSetpointButton.reset(new JoystickButton(operatorStick.get(), 1));
    flapperHighSetpointButton->WhenPressed(new FlapperHighSetpoint(0));
    flapperLowSetpointButton.reset(new JoystickButton(operatorStick.get(), 1));
    flapperLowSetpointButton->WhenPressed(new FlapperLowSetpoint(0));
    prepIntake.reset(new JoystickButton(operatorStick.get(), 3));
    prepIntake->WhileHeld(new PrepBallIntake());
    ballOut.reset(new JoystickButton(operatorStick.get(), 3));
    ballOut->WhileHeld(new ShootBallIntake());
    ballIn.reset(new JoystickButton(operatorStick.get(), 2));
    ballIn->WhileHeld(new ShootBallIntake());

    // SmartDashboard Buttons
    SmartDashboard::PutData("RetractBallIntake", new RetractBallIntake());
    SmartDashboard::PutData("CollectBallIntake", new CollectBallIntake());
    SmartDashboard::PutData("ShootBallIntake", new ShootBallIntake());
    SmartDashboard::PutData("PrepBallIntake", new PrepBallIntake());
    SmartDashboard::PutData("MoveFlapper", new MoveFlapper());
    SmartDashboard::PutData("Drive", new Drive());

    // END AUTOGENERATED CODE, SOURCE=ROBOTBUILDER ID=CONSTRUCTORS
}

// BEGIN AUTOGENERATED CODE, SOURCE=ROBOTBUILDER ID=FUNCTIONS

std::shared_ptr<Joystick> OI::getOperatorStick() {
   return operatorStick;
}

std::shared_ptr<Joystick> OI::getLeftDriveStick() {
   return leftDriveStick;
}

std::shared_ptr<Joystick> OI::getRightDriveStick() {
   return rightDriveStick;
}


    // END AUTOGENERATED CODE, SOURCE=ROBOTBUILDER ID=FUNCTIONS
