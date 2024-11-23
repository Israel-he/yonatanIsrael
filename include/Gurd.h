#pragma once
#include "Location.h"
class Gurd{

	public:

		Gurd();

		Gurd(Location start_loc);

		Location Get_loc();

		

	private:
		Location cuurent_loc;
		
		Location start_loc;

		char name;

};
