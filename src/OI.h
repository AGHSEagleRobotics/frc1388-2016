// RobotBuilder Version: 2.0
//
// This file was generated by RobotBuilder. It contains sections of
// code that are automatically generated and assigned by robotbuilder.
// These sections will be updated in the future when you export to
// C++ from RobotBuilder. Do not put any code or make any change in
// the blocks indicating autogenerated code or it will be lost on an
// update. Deleting the comments indicating the section will prevent
// it from being updated in the future.


#ifndef OI_H
#define OI_H

#include "WPILib.h"

class OI {
private:
	// BEGIN AUTOGENERATED CODE, SOURCE=ROBOTBUILDER ID=DECLARATIONS
	std::shared_ptr<Joystick> rightDriveStick;
	std::shared_ptr<Joystick> leftDriveStick;
	std::shared_ptr<Joystick> operatorStick;
	std::shared_ptr<JoystickButton> stopBallOut;
	std::shared_ptr<JoystickButton> stopBallIn;
	std::shared_ptr<JoystickButton> flapperHighSetpointButton;
	std::shared_ptr<JoystickButton> flapperLowSetpointButton;
	std::shared_ptr<JoystickButton> ballOut;
	std::shared_ptr<JoystickButton> ballIn;

    // END AUTOGENERATED CODE, SOURCE=ROBOTBUILDER ID=DECLARATIONS
public:
	OI();
	// BEGIN AUTOGENERATED CODE, SOURCE=ROBOTBUILDER ID=PROTOTYPES

	std::shared_ptr<Joystick> getOperatorStick();
	std::shared_ptr<Joystick> getLeftDriveStick();
	std::shared_ptr<Joystick> getRightDriveStick();

    // END AUTOGENERATED CODE, SOURCE=ROBOTBUILDER ID=PROTOTYPES

};

#endif
