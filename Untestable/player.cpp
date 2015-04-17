#include "player.h"

Player::Player()
{
    health = 70;
    maxHealth = 70;
    dmg = 6;
    suspicion = 0;
    score = 0;
    exp = 0;
    level = 1;
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

int Player::getExp()
{
    return exp;
}

int Player::getLevel()
{
    return level;
}
