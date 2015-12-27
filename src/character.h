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
    enum class attribute
    {
        intel,
        wisdom,
        strength,
        charisma,
        constitution,
        dexterity,
    };

protected:
    character()
    : attributes_{{0, 0, 0, 0, 0, 0}}
    {}

private:
    // std::forward_list<std::shared_ptr<item>> contents_;

    std::array<uint8_t, 6> attributes_;
};


#endif //PTMUD_SCRATCH_CHARACTER_H
