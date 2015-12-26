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

protected:
    character() {}

private:
    // std::forward_list<std::shared_ptr<item>> contents_;

};


#endif //PTMUD_SCRATCH_CHARACTER_H
