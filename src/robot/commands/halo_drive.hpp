#ifndef HALO_DRIVE_HPP
#define HALO_DRIVE_HPP

#include <WPILib.h>

// Run the left and right drive motors from the primary driver's left and right
// thumbsticks.
class Halo_Drive : public Command {
public:
	Halo_Drive();
	void Initialize() {};
	void Execute();
	bool IsFinished();
	void End() {};
	void Interrupted() {};

};

#endif // HALO_DRIVE_HPP
