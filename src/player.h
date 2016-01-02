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

    // TODO: Player flags
    // TODO: Player preferences
    // TODO: Player title
    // TODO: Player hometown
    // TODO: Password
    // TODO: Skills and spells
    // TODO: Command aliases
    // TODO: Command parser
    // TODO: Network basic_connection handling

    player()
    : class_{}
    {}

protected:

private:
    playerclass class_;
};


#endif //PTMUD_SCRATCH_PLAYER_H
