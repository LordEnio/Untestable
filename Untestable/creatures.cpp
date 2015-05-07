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

KingHamlet::KingHamlet()
{
    setHealth(120);
    setMaxHealth(120);
    setDmg(5);
    setIsDead(false);
    setCurse(true);
}

void KingHamlet::setHealth(int h)
{
    health = h;
    if (h < 0)
    {
        health = 0;
    }
}

void KingHamlet::setMaxHealth(int m)
{
    maxHealth = m;
}

void KingHamlet::setDmg(int d)
{
    dmg = d;
}

void KingHamlet::setIsDead(bool d)
{
    isDead = d;
}

int const KingHamlet::getHealth()
{
    return health;
}

int const KingHamlet::getMaxHealth()
{
    return maxHealth;
}

int const KingHamlet::getDmg()
{
    return dmg;
}

bool KingHamlet::getIsDead()
{
    return isDead;
}

bool KingHamlet::checkDeath()
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

void KingHamlet::setCurse(bool c)
{
    curse = c;
}

bool KingHamlet::getCurse()
{
    return curse;
}

int KingHamlet::standardAttack()
{
    srand(time(NULL));
    int dmgDealt;
    dmgDealt = rand() % 4 + dmg;
    return dmgDealt;
}

int KingHamlet::Curse()
{
    if(curse == true)
    {
        srand(time(NULL));
        int dmgDealt;
        dmgDealt = rand() % 3 + 1;
        std::cout << "\nThe Ghost curses you!" << std::endl;
        std::cout << "You take ";
        col(3);
        std::cout << dmgDealt;
        col(7);
        std::cout << " and are spooked!" << std::endl;
        return dmgDealt;
    }
    else
    {
        return 0;
    }
}

int KingHamlet::Attack()
{
    int dmgDealt;
    srand(time(NULL));
    dmgDealt = standardAttack();
    std::cout << "The Ghost deals ";
    col(12);
    std::cout << dmgDealt;
    col(7);
    std::cout << " to you!" << std::endl;
    return dmgDealt;
}

Claudius::Claudius()
{
    setHealth(200);
    setMaxHealth(200);
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
    return health;
}

int Claudius::getMaxHealth()
{
    return maxHealth;
}

int Claudius::getDmg()
{
    return dmg;
}

bool Claudius::getIsDead()
{
    return isDead;
}

bool Claudius::checkDeath()
{
    if (health > 0)
    {
        return false;
    }

    else
    {
        return true;
    }
}

int Claudius::standardAttack()
{
    srand(time(NULL));
    int dmgDealt;
    dmgDealt = rand() % 4 + dmg;
    return dmgDealt;
}


int Claudius::Attack()
{
    int dmgDealt;
    srand(time(NULL));
    dmgDealt = standardAttack();
    std::cout << "Claudius deals ";
    col(12);
    std::cout << dmgDealt;
    col(7);
    std::cout << " to you!" << std::endl;
    return dmgDealt;
}

Polonius::Polonius()
{
    setHealth(500);
    setMaxHealth(500);
    setDmg(15);

    setIsDead(false);
}

void Polonius::setHealth(int h)
{
    health = h;
    if (health < 0)
    {
        health = 0;
    }
}

void Polonius::setMaxHealth(int m)
{
    maxHealth = m;
}

void Polonius::setDmg(int d)
{
    dmg = d;
}

void Polonius::setIsDead(bool d)
{
    isDead = d;
}

int Polonius::getHealth()
{
    return health;
}

int Polonius::getMaxHealth()
{
    return maxHealth;
}

int Polonius::getDmg()
{
    return dmg;
}

bool Polonius::getIsDead()
{
    return isDead;
}

bool Polonius::checkDeath()
{
    if (health > 0)
    {
        return false;
    }

    else
    {
        return true;
    }
}

int Polonius::standardAttack()
{
    srand(time(NULL));
    int dmgDealt;
    dmgDealt = rand() % 4 + dmg;
    return dmgDealt;
}


int Polonius::Attack()
{
    int dmgDealt;
    int attackChoice;
    srand(time(NULL));
    attackChoice = rand() % 6 + 1;
    if (Polonius::getHealth() > 150)
    {
        dmgDealt = standardAttack();
        std::cout << "Polonius deals ";
        col(12);
        std::cout << dmgDealt;
        col(7);
        std::cout << " to you!" << std::endl;
    }
    
    else if(Polonius::getHealth() < 150 && attackChoice = 1 || attackChoice = 2 || attackChoice = 3 || attackChoice = 4 || attackChoice = 5)
    {
        dmgDealt = standardAttack();
        std::cout << "Polonius deals ";
        col(12);
        std::cout << dmgDealt;
        col(7);
        std::cout << " to you!" << std::endl;
    }
    
    else if(Polonius::getHealth() < 150 && attackChoice == 6)
    {
        dmgDealt = standardAttack() * (rand() % 2 + 2;) + rand() % 4;
        std::cout << "Polonius goes BERSERK!! He deals ";
        col(12);
        std::cout << dmgDealt;
        col(7);
        std::cout << " to you!" << std::endl;
    }
    
    
    return dmgDealt;
}

Laertes::Laertes()
{
    setHealth(700);
    setMaxHealth(700);
    setDmg(19);
    setPoison(false);

    setIsDead(false);
}

void Laertes::setHealth(int h)
{
    health = h;
    if (health < 0)
    {
        health = 0;
    }
}

void Laertes::setMaxHealth(int m)
{
    maxHealth = m;
}

void Laertes::setDmg(int d)
{
    dmg = d;
}

void Laertes::setPoison(bool p)
{
    poison = p;
}


void Laertes::setIsDead(bool d)
{
    isDead = d;
}

int Laertes::getHealth()
{
    return health;
}

int Laertes::getMaxHealth()
{
    return maxHealth;
}

int Laertes::getDmg()
{
    return dmg;
}

bool Laertes::getPoison()
{
    return poison;
}

bool Laertes::getIsDead()
{
    return isDead;
}

bool Laertes::checkDeath()
{
    if (health > 0)
    {
        return false;
    }

    else
    {
        return true;
    }
}

int Laertes::standardAttack()
{
    srand(time(NULL));
    int dmgDealt;
    dmgDealt = rand() % 4 + dmg;
    return dmgDealt;
}

int Laertes::poisonAttack()
{
    srand(time(NULL));
    int dmgDealt;
    int dmgPoison;
    int dmgTotal;
    dmgPoison = rand() % 3 + 8;
    dmgDealt = standardAttack();
    dmgTotal = dmgDealt + dmgPoison;
    if (Laertes::getPoison() == false)
    {
        std::cout << "Laertes stabs you with his poison sword!!\n You will now take continous damage!" << std:endl;
        setPoison() = true;
    }
    
    std::cout << "Laertes deals ";
    col(12);
    std::cout << dmgDealt;
    col(7);
    std::cout << " to you!" << std::endl;
    std::cout << "The poison deals ";
    col(12);
    std::cout << dmgPoison;
    col(7);
    std::cout << " to you!" << std::endl;
    return dmgTotal;
    
}


int Laertes::Attack()
{
    int dmgDealt;
    srand(time(NULL));
    dmgDealt = standardAttack();
    std::cout << "Laertes deals ";
    col(12);
    std::cout << dmgDealt;
    col(7);
    std::cout << " to you!" << std::endl;
    return dmgDealt;
}

