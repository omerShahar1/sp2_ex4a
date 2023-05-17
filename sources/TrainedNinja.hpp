#pragma once

#include "Ninja.hpp"

const int TrainedNinja_speed = 12;
const int TrainedNinja_health = 120;

namespace ariel
{

    class TrainedNinja : public Ninja
    {

    public:
        TrainedNinja(const string &name, const Point &loc) : Ninja(name, loc, TrainedNinja_speed){}
    };
}