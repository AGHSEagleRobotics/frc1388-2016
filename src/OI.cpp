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
#include "Commands/AutonomousCommand.h"
#include "Commands/Drive.h"
#include "Commands/MoveFlapper.h"
#include "Commands/PrepBallIntake.h"
#include "Commands/ShootBallIntake.h"


    // END AUTOGENERATED CODE, SOURCE=ROBOTBUILDER ID=INCLUDES

OI::OI() {
    // Process operator interface input here.
    // BEGIN AUTOGENERATED CODE, SOURCE=ROBOTBUILDER ID=CONSTRUCTORS
    operatorStick.reset(new Joystick(0));
    
     PrepIntake.reset(new JoystickButton(operatorStick.get(), 1));
     PrepIntake->WhileHeld(new PrepBallIntake());
    ballOut.reset(new JoystickButton(operatorStick.get(), 1));
    ballOut->WhileHeld(new ShootBallIntake());
    ballIn.reset(new JoystickButton(operatorStick.get(), 1));
    ballIn->WhileHeld(new ShootBallIntake());

    // SmartDashboard Buttons
    SmartDashboard::PutData("ShootBallIntake", new ShootBallIntake());
    SmartDashboard::PutData("PrepBallIntake", new PrepBallIntake());
    SmartDashboard::PutData("MoveFlapper", new MoveFlapper());
    SmartDashboard::PutData("Drive", new Drive());
    SmartDashboard::PutData("Autonomous Command", new AutonomousCommand());

    // END AUTOGENERATED CODE, SOURCE=ROBOTBUILDER ID=CONSTRUCTORS
}

// BEGIN AUTOGENERATED CODE, SOURCE=ROBOTBUILDER ID=FUNCTIONS

std::shared_ptr<Joystick> OI::getOperatorStick() {
   return operatorStick;
}


    // END AUTOGENERATED CODE, SOURCE=ROBOTBUILDER ID=FUNCTIONS
