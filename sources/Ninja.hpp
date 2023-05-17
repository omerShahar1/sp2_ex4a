#pragma once

#include "Character.hpp"

namespace ariel
{

    class Ninja : public Character
    {
    private:
        int speed;

    public:
        Ninja(const string &name, const Point &loc, int speed);

        int getSpeed() const;

        void move(Character *temp);

        void slash(Character *temp);

    };

}