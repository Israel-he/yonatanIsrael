#pragma once
#include "Robot.h"
#include <iostream>


Robot::Robot(Location loc)
    : currentLocation(loc) 
{
}

Location Robot::getLoc_Robot()
{
    return (currentLocation);
}

void Robot::setLoc_Robot(Location Loc)
{
    currentLocation.col = Loc.col;
    currentLocation.row = Loc.row;
   
}

void Robot::move_robot(int key)
{
   

    
    if (key == Keys::SPECIAL_KEY) {
        key = _getch();  

        switch (key) {
        case SpecialKeys::UP:
            if (currentLocation.row>0)
            {
                printSimbol(currentLocation, ' ');
                currentLocation.row--;
                printSimbol(currentLocation,symbol);
            }
            break;
        case SpecialKeys::DOWN:
            printSimbol(currentLocation, ' ');
            currentLocation.row++;
            break;
        case SpecialKeys::LEFT:
            if (currentLocation.col > 0) currentLocation.col--;
            {
                printSimbol(currentLocation, ' ');
            }
            break;
        case SpecialKeys::RIGHT:
            printSimbol(currentLocation, ' ');
            currentLocation.col++;
            break;
        default:
            break;
        }

        Screen::setLocation(currentLocation); // עדכון מיקום הסמן במסך
    }
    printSimbol(currentLocation, symbol);
}

void Robot::printSimbol(Location loc, char ch)
{
    Screen::setLocation(currentLocation);
    std::cout << ch;
}

 


//Location Robot::getCurrentLocation() const {
//    return currentLocation;
//}
//
//char Robot::getSymbol() const {
//    return symbol;
//}
//
//void Robot::move(char direction, Board& board) {
//     מחיקת מיקום הרובוט הנוכחי
//    board.setCell(currentLocation.col, currentLocation.row, ' ');
//
//     חישוב מיקום חדש
//    int newX = currentLocation.col;
//    int newY = currentLocation.row;
//
//    switch (direction) {
//    case 'w': // למעלה
//        newY = (newY > 0) ? newY - 1 : newY;
//        break;
//    case 's': // למטה
//        newY = (newY < board.getSize() - 1) ? newY + 1 : newY;
//        break;
//    case 'a': // שמאלה
//        newX = (newX > 0) ? newX - 1 : newX;
//        break;
//    case 'd': // ימינה
//        newX = (newX < board.getCell(0, 0).size() - 1) ? newX + 1 : newX;
//        break;
//    }
//
//     עדכון המיקום החדש
//    currentLocation.setLocation(newX, newY);
//
//     הצבת הרובוט במיקום החדש
//    board.setCell(newX, newY, symbol);
//}
//











//
//
//_____________________________________
//#include "Robot.h"
//#include<string>
//#include <fstream>
//#include <iostream>
//using namespace std;
//
//Robot::Robot(const Location& startLoc)
//	:start_loc(startLoc),cuurent_loc(startLoc),lives(5)
//{
//	 
//}
//
//void Robot::GetCuurentLoc(Location cuurentLoc)
//{
//	cuurent_loc.col = cuurentLoc.col ;
//	cuurent_loc.row = cuurentLoc.row;
//	return  Location(cuurent_loc);
//}
//
//void Robot::printLoc()
//
//{
//    cout << cuurent_loc.col << " " << cuurent_loc.row+1;
//}
//	 











//
//
//
//
//
//
//    if (!file.is_open())
//    {
//        cout << "not working";
//        return;
//    }
//    string line;
//    while (getline(file, line))
//    {
//        for (int i = 0; i < line.size(); i++)
//        {
//
//        }
//    }
//
//}
//}
//
// Location Robot::set_first_loction(std::string string)
//{
//	 
//}
//
//Location Robot::GetStartLoc( )
//{
//	return start_loc;
//}
// 
//
//
//
//Robot::Robot(Location start_loc)
//{
//}
