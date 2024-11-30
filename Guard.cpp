#include "Guard.h"



Guard::Guard(Location loc)
      :start_loc(loc)
{
    setLoc(loc);
}


void Guard::setLoc(Location Loc)
{
    current_loc.col = Loc.col;
    current_loc.row = Loc.row;
}

Location Guard::getLoc()
{
    return Location(current_loc);
}

void Guard::move_guard(int key)
{
    if (key == Keys::SPECIAL_KEY) {
        key = _getch();

        switch (key) {
        case SpecialKeys::UP:
            if (current_loc.row > 0)
            {
                printSimbol(current_loc, ' ');
                current_loc.row--;
                printSimbol(current_loc, symbol);
            }
            break;
        case SpecialKeys::DOWN:
            printSimbol(current_loc, ' ');
            current_loc.row++;
            break;
        case SpecialKeys::LEFT:
            if (current_loc.col > 0) current_loc.col--;
            {
                printSimbol(current_loc, ' ');
            }
            break;
        case SpecialKeys::RIGHT:
            printSimbol(current_loc, ' ');
            current_loc.col++;
            break;
        default:
            break;
        }

        Screen::setLocation(current_loc); // тглеп ойчен дсоп боск
    }
    printSimbol(current_loc, symbol);
}

    void  Guard::printSimbol(Location loc, char ch)
    {
        Screen::setLocation(current_loc);
        std::cout << ch;
    }




