#include "Location.h"
#include "iostream"
#include "vector"
#include "string"
 
class Board
{
public:

    Board(std::string nameFile);
    
    void setLoOfRobot(Location Loc);
    Location getLocOfRobot();

    void setLocOfGuard(Location loc);
    Location getLocOfGuard(int indx);//return guard by indx
    int getNumOfGuard();


    void printBoard();
     
    int getSize();

private:
    
    std::vector<Location>m_gaurdLoc;
    int m_numOfGuard;

    Location m_robot_loc;
    std::vector<std::string>m_board;

    int m_size;
};