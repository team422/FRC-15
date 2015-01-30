#include "robot.hpp"
#include "user_interface.hpp"
#include "subsystems/subsystems.hpp"
#include <WPILib.h>

void Robot::RobotInit() {

	// The order of these lines matters, as some components of the UI depend on
	// the subsystems being initialized.
	Subsystems::initialize();
	UI::initialize();
	//autonomous = new Autonomous();
}

void Robot::AutonomousInit() {
	//autonomous->Start();
}

void Robot::TeleopInit() {
	//autonomous->Cancel();
}

void Robot::AutonomousPeriodic() {
	Scheduler::GetInstance()->Run();
}

void Robot::TeleopPeriodic() {
	Scheduler::GetInstance()->Run();
}

// The equivalent of the main() function when using WPILib; this macro starts
// the code.
START_ROBOT_CLASS(Robot)
