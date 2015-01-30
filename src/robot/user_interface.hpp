#ifndef USER_INTERFACE_HPP
#define USER_INTERFACE_HPP

#include "port_mapping.hpp"
#include <WPILib.h>

// Describes the user interface of the robot, things like joystick and buttons.
namespace UI {
	namespace Primary_Driver {
		extern Joystick *left_stick,
		                *right_stick;
	}
	
	void initialize();
}

#endif // USER_INTERFACE_HPP
