#include "drive_base.hpp"
#include "../commands/halo_drive.hpp"
#include "../port_mapping.hpp"
#include <WPILib.h>

Drive_Base::Drive_Base() :
Subsystem("Drive_Base"),
front_left_motor ( new CANTalon(CANBusIDs::FRONT_LEFT) ),
front_right_motor( new CANTalon(CANBusIDs::FRONT_RIGHT) ),
back_left_motor  ( new CANTalon(CANBusIDs::BACK_LEFT) ),
back_right_motor ( new CANTalon(CANBusIDs::BACK_RIGHT) ),
robot_drive      ( new RobotDrive(front_left_motor, 
	                              back_left_motor, 
	                              front_right_motor, 
	                              back_right_motor) {

	//Set the closed-loop PID's mode
	front_left_motor->SetControlMode(CANSpeedController::kSpeed);
	front_right_motor->SetControlMode(CANSpeedController::kSpeed);
	back_left_motor->SetControlMode(CANSpeedController::kSpeed);
	back_right_motor->SetControlMode(CANSpeedController::kSpeed);
	//Set to an initial value
	front_left_motor->Set(0.0);
	front_right_motor->Set(0.0);
	back_left_motor->Set(0.0);
	back_right_motor->Set(0.0);
	//Enable closed-loop PID
	front_left_motor->EnableControl();
	front_right_motor->EnableControl();
	back_left_motor->EnableControl();
	back_right_motor->EnableControl();
}

void Drive_Base::InitDefaultCommand() {
	SetDefaultCommand( new Halo_Drive() );
}
