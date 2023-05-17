#include <iostream>
#include <string>
#include "Character.hpp"

using namespace std;

namespace ariel
{
    Character::Character(const string &name, const Point &loc, int hit_points) : name(name), loc(loc), hit_points(hit_points) {}

    Character::Character(const Character &temp) : name(temp.name), loc(temp.loc), hit_points(temp.hit_points) {}

    
    bool Character::isAlive() const
    {
        return false;
    }

    double Character::distance(const Character *temp) const
    {
        return 1.0;
    }

    void Character::hit(int hits)
    {

    }

    const string &Character::getName() const
    {
        return this->name;
    }

    const Point &Character::getLocation() const
    {
        return loc;
    }

    const string &Character::print() const
    {
        return this->name;
    }



    void Character::setLocation(const Point &loc)
    {

    }
}
