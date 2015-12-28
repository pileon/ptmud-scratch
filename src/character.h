//
// Created by arrow on 2015-12-26.
//

#ifndef PTMUD_SCRATCH_CHARACTER_H
#define PTMUD_SCRATCH_CHARACTER_H

#include <memory>
#include <forward_list>

#include "basic_object.h"
class location;
class item;

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

        num_attributes
    };

    enum class eqpos
    {
        head,           // Worn on head, like a hat or a helmet
        neck,
        body,
        arms,
        hands,
        legs,
        feet,
        waist,
        about,          // Worn about the body, like a shroud or cape
        left_wrist,
        right_wrist,
        left_hold,      // Holding in left hand (weapon, shield, staff, etc)
        right_hold,     // Holding in right hand

        // TODO: Rings, equipment positions or handled separately?
        // TODO: How about multiple bracelets?

        num_eqpos
    };

    enum class sex
    {
        neutral,
        female,
        male
    };

    // Accessor functions
    uint8_t attr(const attribute attr) const
    {
        return attributes_[static_cast<std::size_t>(attr)];
    }

    uint8_t& attr(const attribute attr)
    {
        return attributes_[static_cast<std::size_t>(attr)];
    }

protected:
    character()
    : location_{},
      attributes_{},
      sex_(sex::neutral)
    {}

private:
    static constexpr std::size_t num_attributes = static_cast<std::size_t>(attribute::num_attributes);
    static constexpr std::size_t num_eqpos      = static_cast<std::size_t>(eqpos::num_eqpos);

    std::shared_ptr<location> location_;

    std::forward_list<std::shared_ptr<item>> contents_;  // Carried items

    std::array<uint8_t, num_attributes> attributes_;
    std::array<std::shared_ptr<item>, num_eqpos> equipment_;  // Equipped items

    sex sex_;
};


#endif //PTMUD_SCRATCH_CHARACTER_H
