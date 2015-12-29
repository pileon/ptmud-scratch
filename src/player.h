//
// Created by arrow on 2015-12-29.
//

#ifndef PTMUD_SCRATCH_PLAYER_H
#define PTMUD_SCRATCH_PLAYER_H

#include "character.h"

class player : public character
{
public:
    enum class playerclass
    {
        fighter,
        mage,
        cleric,
        thief
    };

    player()
    : class_{}
    {}

protected:

private:
    playerclass class_;
};


#endif //PTMUD_SCRATCH_PLAYER_H
