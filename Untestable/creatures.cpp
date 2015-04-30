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

OldMan::OldMan()
{
    setHealth(300);
    setMaxHealth(300);
    setDmg(30);
    setIsDead(false);
}

void OldMan::setHealth(int h)
{
    health = h;
    if (h < 0)
    {
        health = 0;
    }

}

void OldMan::setMaxHealth(int m)
{
    maxHealth = m;
}

void OldMan::setDmg(int d)
{
    dmg = d;
}

void OldMan::setIsDead(bool d)
{
    isDead = d;
}

int const OldMan::getHealth()
{
    return health;
}

int const OldMan::getMaxHealth()
{
    return maxHealth;
}

int const OldMan::getDmg()
{
    return dmg;
}

bool OldMan::getIsDead()
{
    return isDead;
}

bool OldMan::checkDeath()
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

int OldMan::standardAttack()
{
    srand(time(NULL));
    int dmgDealt;
    dmgDealt = (getDmg() - 5) + rand() % 9;
    return dmgDealt;
}

int OldMan::Attack()
{
    int dmgDealt;
    srand(time(NULL));
    int attackChoice = rand() % 4 + 1;
    if (attackChoice == 1 || attackChoice == 2 || attackChoice == 3)
    {

        dmgDealt = standardAttack();
        std::cout << "The Old Man deals ";
        col(12);
        std::cout << dmgDealt;
        col(7);
        std::cout << " to you!" << std::endl;
    }
    else
    {
        dmgDealt = 0;
        std::cout << "The Old Man spits on you..." << std::endl;
    }

    return dmgDealt;
}

Claudius::Claudius()
{
    setHealth(400);
    setMaxHealth(400);
    setDmg(15);
    setIsDead(false);
}

void Claudius::setHealth(int h)
{
    health = h;
    if (health < 0)
    {
        health = 0;
    }
}

void Claudius::setMaxHealth(int m)
{
    maxHealth = m;
}

void Claudius::setDmg(int d)
{
    dmg = d;
}

void Claudius::setIsDead(bool d)
{
    isDead = d;
}

int Claudius::getHealth()
{
    
}
