#pragma once
#include <iostream>
#include "string"
#include "Board.h"
#include "Robot.h"
#include "Guard.h"
using namespace std;

class gameControler
{
public:

	gameControler(const std::string& nameFile);
	void setLoc_robot_game();


	int numOfGuard();
	void setLoc_guard_game();


	void print();      
    void move();
	 
private:
	 
	Board m_board;
	Robot m_robot;
	vector<Guard>m_guard;
};