#include "creatures.h"
#include "screen.h"
#include <stdio.h>
#include <iostream>
#include <stdlib.h>
#include <time.h>

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
    if (h < 0)
    {
        health = 0;
    }

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

bool Ghostling::checkDeath()
{
    if (getHealth() > 0)
    {
        return false;
    }

    else
    {
        return true;
    }

}

int Ghostling::standardAttack()
{
    srand(time(NULL));
    int dmgDealt;
    dmgDealt = (getDmg() - 1) + rand() % 3;
    return dmgDealt;
}

int Ghostling::Attack()
{
    int dmgDealt;
    srand(time(NULL));
    int attackChoice = rand() % 4 + 1;
    if (attackChoice == 1 || attackChoice == 2 || attackChoice == 3)
    {

        dmgDealt = standardAttack();
        std::cout << "The Ghostling deals ";
        col(12);
        std::cout << dmgDealt;
        col(7);
        std::cout << " to you!" << std::endl;
    }
    else
    {
        dmgDealt = 0;
        std::cout << "The Ghostling stares at you..." << std::endl;
    }

    return dmgDealt;
}




