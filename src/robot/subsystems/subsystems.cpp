#include "subsystems.hpp"

Drive_Base * Subsystems::drive_base = 0;

// Ideally, these would be statically initialized above. However, WPILib has a
// bug where networking code in the constructors of actuators and sensors causes
// a crash when called during static initialization. The initialize function is
// a workaround until the bug is addressed.
// See http://firstforge.wpi.edu/sf/go/artf1644
void Subsystems::initialize() {
	drive_base = new Drive_Base();
}
