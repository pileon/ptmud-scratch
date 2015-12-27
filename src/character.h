//
// Created by arrow on 2015-12-26.
//

#ifndef PTMUD_SCRATCH_CHARACTER_H
#define PTMUD_SCRATCH_CHARACTER_H

#include <memory>
#include <forward_list>

#include "basic_object.h"

class character : public basic_object
{
public:
    enum attribute
    {
        intel,
        wisdom,
        strength,
        charisma,
        constitution,
        dexterity,

        num_attributes
    };

    enum eqpos
    {
        head,
        left_hand,
        right_hand,

        num_eqpos
    };

protected:
    character()
    : attributes_{{0, 0, 0, 0, 0, 0}}
    {}

private:
    // std::forward_list<std::shared_ptr<item>> contents_;

    std::array<uint8_t, num_attributes> attributes_;
    // std::array<std::shared_ptr<item>, num_eqpos> equipment_;
};


#endif //PTMUD_SCRATCH_CHARACTER_H
