// RobotBuilder Version: 2.0
//
// This file was generated by RobotBuilder. It contains sections of
// code that are automatically generated and assigned by robotbuilder.
// These sections will be updated in the future when you export to
// C++ from RobotBuilder. Do not put any code or make any change in
// the blocks indicating autogenerated code or it will be lost on an
// update. Deleting the comments indicating the section will prevent
// it from being updated in the future.



#ifndef AUTONOMOUSCOMMAND_H
#define AUTONOMOUSCOMMAND_H

#include "Commands/CommandGroup.h"
#include "Commands/Subsystem.h"
#include "../Robot.h"

/**
 *
 *
 * @author ExampleAuthor
 */
class AutonomousCommand: public CommandGroup {
public:

    // BEGIN AUTOGENERATED CODE, SOURCE=ROBOTBUILDER ID=CONSTRUCTOR
	AutonomousCommand();

    // END AUTOGENERATED CODE, SOURCE=ROBOTBUILDER ID=CONSTRUCTOR
	void CorrectError(int fieldPos);
	void AlignToGoal(bool goForLeft);
	void Aim();
	void CrossNoFlapper();
	void CrossWithFlapper();
	bool CheckAccelerometer();

	int positionDial;
	int autonDial;
	int obstacle;


private:

};

#endif
