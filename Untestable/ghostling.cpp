#include "ghostling.h"

Ghostling::Ghostling()
{
    setHealth(20);
    setMaxHealth(20);
    setDmg(4);
    setIsDead(false);
}

void Ghostling::setHealth(int h)
{
    health = h;
}

void Ghostling::setMaxHealth(int m)
{
    maxHealth = m;
}

void Ghostling::setDmg(int d)
{
    dmg = d;
}

void Ghostling::setIsDead(bool d)
{
    isDead = d;
}

int const Ghostling::getHealth()
{
    return health;
}

int const Ghostling::getMaxHealth()
{
    return maxHealth;
}

int const Ghostling::getDmg()
{
    return dmg;
}

bool Ghostling::getIsDead()
{
    return isDead;
}
