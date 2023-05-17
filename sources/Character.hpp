#pragma once

#include "Point.hpp"
#include <stdio.h>
#include <string>

using namespace std;

namespace ariel
{
    class Character
    {
    private:
        Point loc;
        string name;
        int hit_points;

    public:
        Character(const string &name, const Point &loc, int);

        Character(const Character &temp);

        bool isAlive() const;

        double distance(const Character *temp) const;

        void hit(int);

        const string &getName() const;

        const Point &getLocation() const;

        const string &print() const;

        const void attack(Character *enemy);

        void setLocation(const Point &loc);
    };
};