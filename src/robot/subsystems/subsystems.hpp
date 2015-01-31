#ifndef SUBSYSTEMS_HPP
#define SUBSYSTEMS_HPP

#include "drive_base.hpp"

// A copy of each subsystem on the robot, to be shared among the commands which
// require them.
namespace Subsystems {
	extern Drive_Base * drive_base;
	void initialize();
}

#endif // SUBSYSTEMS_HPP
