#include "gameControler.h"
 
 
 

gameControler::gameControler(const std::string& nameFile)
	          :m_board(std::string (nameFile)),m_robot(Location(0,0))
{
	setLoc_robot_game();
}
//-------------------robot------------------
void gameControler::setLoc_robot_game()
{
	m_robot.setLoc_Robot(m_board.getLocOfRobot());
}
//----------------------guard---------------------------
int gameControler::numOfGuard()
{
	return m_board.getNumOfGuard();
}

void gameControler::setLoc_guard_game()
{
	Guard guard(Location( 0,0));
	for (int i = 0; i < numOfGuard(); i++)
	{
		guard.setLoc(Location(m_board.getLocOfGuard(i)));
		m_guard.push_back(guard);
	}
		 
}
//-----------------------------------------------------
void gameControler::print()
{
	
	m_board.printBoard();
	cout << m_board.getNumOfGuard();
	//move();
}

void gameControler::move()
{
	int i = 0;
	while (i <20)
	{
		int key = _getch();
		//m_robot.move_robot(key);
		m_guard.at(0).move_guard(key); 
		i++;
	}

}
