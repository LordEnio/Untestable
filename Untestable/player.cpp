#include "player.h"
#include "screen.h"
#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include <iostream>

Player Hamlet;

Player::Player()
{
    setHealth(70);
    setMaxHealth(70);
    setDmg(6);
    setSuspicion(0);
    setScore(0);
    setExp(0);
    setLevel(1);
    setGold(0);
}

void Player::setHealth(int h)
{
    health = h;
}

void Player::setMaxHealth(int m)
{
    maxHealth = m;
}

void Player::setDmg(int d)
{
    dmg = d;
}

void Player::setSuspicion(int s)
{
    suspicion = s;
}

void Player::setScore(int s)
{
    score = s;
}

void Player::setExp(int e)
{
    exp = e;
}

void Player::setLevel(int l)
{
    level = l;
}

void Player::setGold(int g)
{
    gold = g;
}

int const Player::getHealth()
{
    return health;
}

int const Player::getMaxHealth()
{
    return maxHealth;
}

int const Player::getDmg()
{
    return dmg;
}

int const Player::getSuspicion()
{
    return suspicion;
}

int const Player::getScore()
{
    return score;
}

unsigned int const Player::getExp()
{
    return exp;
}

unsigned int const Player::getLevel()
{
    return level;
}

unsigned int const Player::getGold()
{
    return gold;
}

unsigned int Player::untilLevel()
{
    int expToLevel;
    expToLevel = level*level+4;
    return expToLevel;
}

bool Player::levelUp()
{
    if(exp >= untilLevel())
    {
        srand(time(NULL));
        ++level;
        maxHealth += level*level + rand() % 10 + 1;
        health = maxHealth;
        dmg += (rand() % 9 + 1) + level;
        return true;
    }
    else
    {
        return false;
    }
}

int Player::standardAttack()
{
    srand(time(NULL));
    int dmgDealt;
    dmgDealt = (getDmg() - 1) + rand() % 3;
    return dmgDealt;
}

int Player::missAttack()
{
    int dmgDealt;
    dmgDealt = 0;
    return dmgDealt;
}

int Player::Attack()
{
    int dmgDealt;
    srand(time(NULL));
    int attackChoice;
    attackChoice = rand() % 4 + 1;
    if (attackChoice == 1 || attackChoice == 2 || attackChoice == 3)
    {
        dmgDealt = standardAttack();
        std::cout << "You deal ";
        col(12);
        std::cout << dmgDealt;
        col(7);
        std::cout << " to the enemy!" << std::endl;
    }
    else
    {
        dmgDealt = missAttack();
        std::cout << "You missed your target with your attack!" << std::endl;
    }
    return dmgDealt;
}

int Player::criticalAttack()
{
    int dmgDealt;
    srand(time(NULL));
    int attackChoice;
    attackChoice = rand() % 4 + 1;
    if (attackChoice == 2)
    {
        srand(time(NULL));
        dmgDealt = (getDmg() + getDmg()) - rand() % 4 + 1;
        std::cout << "You deal ";
        col(12);
        std::cout << dmgDealt;
        col(7);
        std::cout << " to the enemy!" << std::endl;
    }
    else
    {
        std::cout << "You missed your target with your attack!" << std::endl;
        dmgDealt = missAttack();
    }
    return dmgDealt;
}
