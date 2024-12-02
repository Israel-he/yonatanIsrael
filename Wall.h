#pragma once
#include "Location.h"
class Wall {

public:

	Wall();

	Wall(Location loc);

	Location Get_loc();

private:

	Location loc;

	char name;

};