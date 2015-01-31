#include "halo_drive.hpp"
#include "../user_interface.hpp"
#include "../subsystems/subsystems.hpp"
#include <WPILib.h>

Halo_Drive::Halo_Drive() {
	Requires(Subsystems::drive_base);
}

void Halo_Drive::Execute() {
	float forward = UI::Primary_Driver::left_stick->GetX();
	float sideways = UI::Primary_Driver::left_stick->GetY();
	float turn = UI::Primary_Driver::right_stick->GetX();
	Subsystems::drive_base->robot_drive->MecanumDrive_Cartesian(forward, sideways, turn);
}

bool Halo_Drive::IsFinished() {
	return false;
}
