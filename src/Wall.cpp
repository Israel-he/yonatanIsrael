#include "Wall.h"


Wall::Wall() :Wall(Location(0,0)){

}

Wall::Wall(Location location) :loc(location), name('#') {
}

Location Wall::Get_loc() {
	return loc;
}