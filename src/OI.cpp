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
#include "Commands/AutonMoveFlapper.h"
#include "Commands/AutonTurn.h"
#include "Commands/AutonomousCommand.h"
#include "Commands/CollectBallIntake.h"
#include "Commands/DefaultIntake.h"
#include "Commands/Drive.h"
#include "Commands/FlapperHighSetpoint.h"
#include "Commands/FlapperLowSetpoint.h"
#include "Commands/MoveFlapper.h"
#include "Commands/ShootBallIntake.h"
#include "Commands/StopBallntake.h"


    // END AUTOGENERATED CODE, SOURCE=ROBOTBUILDER ID=INCLUDES

OI::OI() {
    // Process operator interface input here.
    // BEGIN AUTOGENERATED CODE, SOURCE=ROBOTBUILDER ID=CONSTRUCTORS
    rightDriveStick.reset(new Joystick(1));
    
    leftDriveStick.reset(new Joystick(0));
    
    operatorStick.reset(new Joystick(2));
    
    stopBallOut.reset(new JoystickButton(operatorStick.get(), 2));
    stopBallOut->WhenReleased(new StopBallntake());
    stopBallIn.reset(new JoystickButton(operatorStick.get(), 1));
    stopBallIn->WhenReleased(new StopBallntake());
    flapperHighSetpointButton.reset(new JoystickButton(operatorStick.get(), 5));
    flapperHighSetpointButton->WhenPressed(new FlapperHighSetpoint(0));
    flapperLowSetpointButton.reset(new JoystickButton(operatorStick.get(), 3));
    flapperLowSetpointButton->WhenPressed(new FlapperLowSetpoint(0));
    ballOut.reset(new JoystickButton(operatorStick.get(), 2));
    ballOut->WhenPressed(new ShootBallIntake());
    ballIn.reset(new JoystickButton(operatorStick.get(), 1));
    ballIn->WhenPressed(new CollectBallIntake());

    // SmartDashboard Buttons

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
