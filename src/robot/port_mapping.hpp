#ifndef PORT_MAPPING_HPP
#define PORT_MAPPING_HPP

#include <WPILib.h>


// When developing, if a port has not been determined, it can be replaced with
// `UNKNOWN`. This will allow the code to compile in debug mode, but in release
// mode it will throw an error.
#ifdef DEBUG
#define UNKNOWN 64
#else
#define UNKNOWN @port_not_assigned
#endif

// Constants specifying where all cables on the robot are plugged in.

namespace CANBusIDs {
	const uint32_t FRONT_LEFT  = 1,
	               FRONT_RIGHT = 2,
				   BACK_LEFT   = 3,
				   BACK_RIGHT  = 4;
}

#endif // PORT_MAPPING_HPP
