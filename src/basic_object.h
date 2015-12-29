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

    std::string const& name() const
    { return name_; }

    std::string& name()
    { return name_; }

protected:
    basic_object()
    : description_{},
      name_{}
    {}

private:
    std::string description_;
    std::string name_;
};


#endif //PTMUD_SCRATCH_BASIC_OBJECT_H
