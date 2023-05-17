#include <iostream>
#include <string>
#include "Character.hpp"
#include "Cowboy.hpp"

using namespace std;

namespace ariel
{
    Cowboy::Cowboy(const string &name, const Point &loc) : Character(name, loc, 0), bullets(0) {}

    void Cowboy::shoot(Character *temp)
    {

    }

    bool Cowboy::hasboolets() const
    {
        return false;
    }

    void Cowboy::reload()
    {

    }

    
}
