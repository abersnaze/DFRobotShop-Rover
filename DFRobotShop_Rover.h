#ifndef DFROBOTSHOP_ROVER_H
#define DFROBOTSHOP_ROVER_H

/*
All versions: Digital pins 5 to 8 are permanently connected to the onboard motor controller on all versions of the rover.
v1.0 and v1.5: Analog pins 0 and 1 are connected to the onboard light and temperature sensors, but can be disconnected using the jumpers (17) and (18).
v2.0: Analog pins 0 and 1 are connected to the optional encoder modules via jumpers (8) on either side of the board.
	If you do not plan to use encoders, ensure the jumpers are not in place, freeing up A0 and A1.
*/
class DFRobotShop_Rover {
private:
	DFRobotShop_Rover();
};

DFRobotShop_Rover *rover = new DFRobotShop_Rover();

#endif