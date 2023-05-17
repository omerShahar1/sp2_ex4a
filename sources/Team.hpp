#pragma once

#include "Point.hpp"
#include "Cowboy.hpp"
#include "OldNinja.hpp"
#include "YoungNinja.hpp"
#include "TrainedNinja.hpp"

#include <iostream>
#include <vector>
#include <string>

using namespace ariel;

namespace ariel
{
    class Team
    {
    private:
        vector<Character*> team;
        Character *leader;

    public:
        Team(Character *temp);

        Team(Character *temp, const vector<Character*> &team);

        Character *getLeader() const;

        vector<Character*> &getTeam();

        virtual void add(Character *temp);

        void attack(Team *temp);

        int stillAlive() const;

        void print() const;
    };
}