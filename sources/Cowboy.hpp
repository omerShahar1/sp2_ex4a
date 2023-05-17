#pragma once
#include "Character.hpp"

using namespace std;

namespace ariel
{

    class Cowboy : public Character
    {

    private:
        int bullets;

    public:
        Cowboy(const string &name, const Point &loc);

        void shoot(Character *temp);

        bool hasboolets() const;

        void reload();
    };
}