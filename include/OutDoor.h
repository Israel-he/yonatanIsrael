#pragma once

#include "Location.h"
class OutDoor {

	public:
		OutDoor();

		OutDoor(Location start_loc);

		Location Get_loc();




	private:

		Location loc;

		char name;

};
