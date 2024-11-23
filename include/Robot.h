#pragma once
#include "Location.h"

class Robot {

	public:

		Robot();

		Robot(Location start_loc);

		Location Get_Sloc();

		Location Get_Cloc();

		int Get_live();

	

	private:

		int lives;
	
		char name;
	
		Location start_loc;

		Location cuurent_loc;



};