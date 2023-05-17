#include <iostream>
#include <string>
#include "Character.hpp"
#include "Ninja.hpp"

using namespace std;

namespace ariel
{
    Ninja::Ninja(const string &name, const Point &loc, int speed) : Character(name, loc, 0), speed(speed) {}

    int Ninja::getSpeed() const
    {
        return speed;
    }

    void Ninja::move(Character *enemy)
    {

    }

    void Ninja::slash(Character *enemy)
    {
        
    }



}
