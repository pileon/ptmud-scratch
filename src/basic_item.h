//
// Created by arrow on 2015-12-28.
//

#ifndef PTMUD_SCRATCH_ITEM_H
#define PTMUD_SCRATCH_ITEM_H

#include <memory>
#include <forward_list>

#include "basic_object.h"
class location;
class character;

class basic_item : public basic_object
{
public:

protected:
    basic_item()
    : location_{},
      owner_{}
    {}

private:
    // Either of location or owner must be a nullptr
    std::shared_ptr<location> location_;    // Where the basic_item is lying
    std::shared_ptr<location> owner_;       // Who carries the basic_item
};


#endif //PTMUD_SCRATCH_ITEM_H
