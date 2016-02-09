// RobotBuilder Version: 2.0
//
// This file was generated by RobotBuilder. It contains sections of
// code that are automatically generated and assigned by robotbuilder.
// These sections will be updated in the future when you export to
// C++ from RobotBuilder. Do not put any code or make any change in
// the blocks indicating autogenerated code or it will be lost on an
// update. Deleting the comments indicating the section will prevent
// it from being updated in the future.


#ifndef DRIVETRAIN_H
#define DRIVETRAIN_H
#include "Commands/Subsystem.h"
#include "WPILib.h"

/**
 *
 *
 * @author ExampleAuthor
 */
class DriveTrain: public Subsystem {
private:
	// It's desirable that everything possible is private except
	// for methods that implement subsystem capabilities
	// BEGIN AUTOGENERATED CODE, SOURCE=ROBOTBUILDER ID=DECLARATIONS
	std::shared_ptr<SpeedController> frontLeftVictor;
	std::shared_ptr<SpeedController> frontRightVictor;
	std::shared_ptr<SpeedController> backLeftVictor;
	std::shared_ptr<SpeedController> backRightVictor;
	std::shared_ptr<RobotDrive> robotDrive41;
	std::shared_ptr<Encoder> driveEncoder;
	std::shared_ptr<AnalogGyro> driveGyro;

    // END AUTOGENERATED CODE, SOURCE=ROBOTBUILDER ID=DECLARATIONS
public:
	DriveTrain();
	void InitDefaultCommand();
	std::shared_ptr<AnalogGyro> getGyro();
	std::shared_ptr<RobotDrive> getRobotDrive();
	// BEGIN AUTOGENERATED CODE, SOURCE=ROBOTBUILDER ID=CONSTANTS

    // END AUTOGENERATED CODE, SOURCE=ROBOTBUILDER ID=CONSTANTS
};

#endif
