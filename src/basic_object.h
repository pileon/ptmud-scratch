//
// Created by arrow on 2015-12-26.
//

#ifndef PTMUD_SCRATCH_BASIC_OBJECT_H
#define PTMUD_SCRATCH_BASIC_OBJECT_H

#include <string>

class basic_object
{
public:
    // Accessor functions

    std::string const& description() const
    { return description_; }

    std::string& description()
    { return description_; }

protected:
    basic_object() {}

private:
    std::string description_;
};


#endif //PTMUD_SCRATCH_BASIC_OBJECT_H
