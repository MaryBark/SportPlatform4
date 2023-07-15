#ifndef COMPETITIONS_H
#define COMPETITIONS_H

#include "Club.h"
#include "Sportsman.h"

class Competitions
{
public:
    Competitions();

    void setClub(const Club& club) { _club = club; }
    void setSportsman(const Sportsman& sportsman) { _sportsman = sportsman; }

    Club club()const {return _club;}
    Sportsman sportsman()const {return _sportsman;}

public:
    Club _club;
    Sportsman _sportsman;
};

#endif // COMPETITIONS_H
