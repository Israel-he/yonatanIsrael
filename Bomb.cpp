#include "Bomb.h"
#include "Location.h"



Bomb::Bomb()
	:Bomb(Location(0, 0))
{

}

Bomb::Bomb(Location c_location) :is_active(false),
level(4),
cuurent_loc(c_location) {

}

bool Bomb::Is_active() {
	return is_active;
}

void Bomb::Actice_Bomb() {
	this->is_active = true;
}

int Bomb::Get_level() {
	return this->level;
}

void Bomb::Change_level() {
	this->level--;
}

Location Bomb::Get_Loc() {
	return this->cuurent_loc;
}