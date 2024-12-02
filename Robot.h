#include "Location.h"
#include <conio.h> 
#include "io.h"
class Robot {
public:
    Robot(Location loc);
    Location getLoc_Robot();
    void setLoc_Robot(Location loc);
  
    void move_robot(int key); 
    //bool canMove(Location Loc,
    void printSimbol(Location loc,char ch);

private:
    Location currentLocation;
    char symbol='/';
};



/*  גישה לערכים
    Location getCurrentLocation() const;
    char getSymbol() const;*/


   







//
//#pragma once
//#include "Location.h"
//#include  <string>
//class Robot {
//
//public:
//
//	Robot(const Location& startLoc);
//	void GetCuurentLoc(Location cuurentLoc);
//	void printLoc();
//
//private:
//
//	int lives;
//
//	char name='/';
//
//	Location start_loc;
//
//	Location cuurent_loc;
//
//};


//
//
///*Location set_first_loction(std::string fileName);
//Location GetStartLoc();*/
//int Get_live();
//
////void Move(Direction dir);
//void PlaceBomb();
//
//bool CheckIfHit();
//  void DecreaseLife();
//   int GetLifeCount() const;
//
//   bool CheckIfReachedExit();
//
//   void ResetPosition(Location new_loc);
//
//   void AddScore(int points);
//   int GetScore() const;