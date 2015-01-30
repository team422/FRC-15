#ifndef DRIVE_BASE_HPP
#define DRIVE_BASE_HPP

#include <WPILib.h>

// The drive motors
class Drive_Base : public Subsystem {
public:
	RobotDrive *robot_drive;

	Drive_Base();
	void InitDefaultCommand();

private:
	CANTalon *front_left_motor,
		     *front_right_motor,
		     *back_left_motor,
		     *back_right_motor;
};

#endif // DRIVE_BASE_HPP
