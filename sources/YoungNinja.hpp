#pragma once

#include "Ninja.hpp"

const int YoungNinja_health = 150;
const int YoungNinja_speed = 8;

namespace ariel
{

    class YoungNinja : public Ninja
    {
    public:
        YoungNinja(const string &name, const Point &loc) : Ninja(name, loc, YoungNinja_speed) {}
    };
}