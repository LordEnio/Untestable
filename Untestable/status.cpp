#include "status.h"

Player::Player()
{
    health = 70;
    maxHealth = 70;
    dmg = 6;
    suspicion = 0;
    score = 0;
}

unsigned int nxtLevel (unsigned int level)
{
    return 16*level*level;
}


bool levelUp ()
{
    if (this -> exp >= nxtLevel(level+1))
    {
        ++level;
        
        unsigned int healthUp = 0;
        unsigned int dmgUp = 0;
        
        this -> healthUp = healthUp + level*level + rand() % 4;
        this -> dmgUp = dmgUp + 1 + rand() % 3;
        return true;
    }
    return false;
}

