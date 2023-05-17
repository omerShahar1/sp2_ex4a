#pragma once

#include "Ninja.hpp"

const int OldNinja_health = 150;
const int OldNinja_speed = 8;

namespace ariel
{

    class OldNinja : public Ninja
    {
    public:
        OldNinja(const string &name, const Point &loc) : Ninja(name, loc, OldNinja_speed) {}
    };
}