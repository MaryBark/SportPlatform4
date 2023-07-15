#ifndef CLUB_H
#define CLUB_H

#include <Sportsman.h>

class Club
{
public:
    Club();

    void setSportsman(const Sportsman& sports) {_sportsman = sports;}
    Sportsman sportsman()const {return _sportsman;}

private:
    Sportsman _sportsman;
};

#endif // CLUB_H
