#pragma once
#include "Location.h"

class Bomb {

	public:

		Bomb();

		Bomb(Location c_location);

		bool Is_active();

		int Get_level();

		Location Get_Loc();

		void Actice_Bomb();

		void Change_level();


	protected:

		bool is_active;

		int level;

		Location cuurent_loc;

		//char name;

};