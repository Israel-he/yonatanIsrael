#pragma once
#include <iostream>
#include "Location.h"
#include "io.h"
#include <conio.h> 
class Guard {

public:

	Guard(Location loc);

	Location getLoc();
	void setLoc(Location Loc);
	void move_guard(int key);
	void printSimbol(Location loc, char ch);

private:

	Location current_loc;

	Location start_loc;

	char symbol='!';

};