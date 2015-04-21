#include "player.h"
#include <stdio.h>
#include <stdlib.h>
#include <time.h>

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

