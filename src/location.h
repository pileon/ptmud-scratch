//
// Created by arrow on 2015-12-26.
//

#ifndef PTMUD_SCRATCH_LOCATION_H
#define PTMUD_SCRATCH_LOCATION_H

#include <array>
#include <memory>
#include <forward_list>

#include "basic_object.h"
class character;
class item;

class location : public basic_object
{
public:
    location()
    : exits_{}, characters_{}
    {}

private:
    // The four cardinal directions, plus up and down
    std::array<std::shared_ptr<location>, 6> exits_;

    std::forward_list<std::shared_ptr<character>> characters_;
    std::forward_list<std::shared_ptr<item>> contents_;
};


#endif //PTMUD_SCRATCH_LOCATION_H
