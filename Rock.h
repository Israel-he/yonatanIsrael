#pragma once

#include "Location.h"
class Rock {

public:

	Rock();

	Rock(Location loc);

	Location Get_loc();


private:

	Location loc;

	char name;

};