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

class item
{
public:

protected:
    item()
    : location_{},
      owner_{}
    {}

private:
    std::shared_ptr<location> location_;
    std::shared_ptr<location> owner_;
};


#endif //PTMUD_SCRATCH_ITEM_H
