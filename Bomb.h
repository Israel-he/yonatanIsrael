#pragma once
#include "Location.h"
#include "io.h"
#include <iostream>
using namespace std;
class Bomb {

public:

	Bomb();

	Bomb(Location c_location);

	bool Is_active();

	int Get_level();

	Location Get_Loc();

	void Actice_Bomb();

	void Change_level();
	void set_name();
	void printBomb(Location loc);
protected:

	bool is_active;

	int level;
	
	Location cuurent_loc;
	 
	char name = char(level);

};