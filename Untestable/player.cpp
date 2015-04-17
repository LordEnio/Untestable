#include "player.h"

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

int Player::getHealth()
{
    return health;
}

int Player::getMaxHealth()
{
    return maxHealth;
}

int Player::getDmg()
{
    return dmg;
}

int Player::getSuspicion()
{
    return suspicion;
}

int Player::getScore()
{
    return score;
}

unsigned int Player::getExp()
{
    return exp;
}

unsigned int Player::getLevel()
{
    return level;
}
