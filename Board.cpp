#include "Board.h"
#include <fstream>
#include <iostream>
#include<string>
#include<vector>

#include <thread>
#include <chrono>
//using namespace std::chrono_literals;
using namespace std;
 

 

Board::Board(std::string nameFile)
      :m_board(), m_size(0), m_robot_loc(Location(0, 0)),m_numOfGuard(0)
{
    auto file = std::ifstream(nameFile);
    if (!file.is_open())
    {
        cout << "not working";
        return;
    }
    
    string line;
    while (getline(file, line))
    {
        
        m_board.push_back(line);
        for(int i=0;i< line.size(); i++)
        { 
            if (m_board[m_size][i] == '/')
            {
                setLoOfRobot(Location(m_size, i));
            }
            else if (m_board[m_size][i] == '!')
                setLocOfGuard(Location(m_size, i));
        }
        m_size++;
    }

}

void Board::printBoard()
{
    for (int i = 0; i < m_size; i++)
    {
        cout << m_board[i]<<endl;
    }
}

void Board::setLoOfRobot(Location Loc)
{
    m_robot_loc.col = Loc.col;
    m_robot_loc.row = Loc.row;
}

Location Board::getLocOfRobot()
{
    return m_robot_loc;
}

void Board::setLocOfGuard(Location loc)
{
    m_gaurdLoc.push_back(loc);
    m_numOfGuard++;
}

Location Board::getLocOfGuard(int indx)
{
    return m_gaurdLoc.at(indx);
}

int Board::getNumOfGuard()
{
    return m_numOfGuard;
}

 

int Board::getSize()
{
    return m_size;
}

