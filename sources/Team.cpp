
#include "Team.hpp"

namespace ariel
{

    Team::Team(Character *leader) : leader(leader)
    {

    }

    Team::Team(Character *leader, const vector<Character*> &team) : leader(leader), team(team) 
    {

    }

    Character* Team::getLeader() const
    {
        return leader;
    }

    vector<Character*> &Team::getTeam()
    {
        return team;
    }

    void Team::add(Character *temp)
    {
    }
    void Team::attack(Team *temp)
    {
    }

    int Team::stillAlive() const
    {
        return 0;
    }

    void Team::print() const
    {
        
    }
}
