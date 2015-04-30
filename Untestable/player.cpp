#include "player.h"
#include "screen.h"
#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include <conio.h>
#include <iostream>

Player Hamlet;

Player::Player()
{
    setHealth(70);
    setMaxHealth(70);
    setDmg(6);
    setSuspicion(0);
    setInsanity(0);
    setScore(0);
    setExp(0);
    setLevel(1);
    setGold(0);
    setIsDead(false);
}

void Player::setHealth(int h)
{
    health = h;
    if (health <= 0)
    {
        health = 0;
    }
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
    if (suspicion >= 100)
    {
        suspicion = 100;
    }
}

void Player::setInsanity(int i)
{
    insanity = i;
    if (insanity >= 100)
    {
        insanity = 100;
    }
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

void Player::setIsDead(bool d)
{
    isDead = d;
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

int const Player::getInsanity()
{
    return insanity;
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

bool Player::getIsDead()
{
    return isDead;
}

unsigned int Player::untilLevel()
{
    int expToLevel;
    expToLevel = level*level+4;
    return expToLevel;
}

void Player::levelUp()
{
    if(exp >= untilLevel())
    {
        srand(time(NULL));
        ++level;
        maxHealth += level*level + rand() % 10 + 1;
        health = maxHealth;
        dmg += (rand() % 9 + 1) + level;
        std::cout << "\nCongratulations!! You have leveled up! Your new stats are...\n" << std::endl;
        getch();
        col(2);
        std::cout << "Health -> " << Hamlet.getHealth() << "/" << Hamlet.getMaxHealth() << "           ";
        col(12);
        std::cout << "Damage -> " << Hamlet.getDmg();
        col(7);
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
    attackChoice = rand() % 7 + 1;
    if (attackChoice == 1 || attackChoice == 2 || attackChoice == 3 || attackChoice == 4 || attackChoice == 5 || attackChoice == 6)
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

int Player::cheatAttack()
{
    int dmgDealt;
    srand(time(NULL));
    dmgDealt = (getDmg() * getDmg() *getDmg()) + rand() % 264 + 1;
    std::cout << "Noice, you critically strike your opponent with your life credit, dealing ";
    col(12);
    std::cout << dmgDealt;
    col(7);
    std::cout << " to the enemy!" << std::endl;
}

void Player::checkDeath()
{
    system("cls");
    if (insanity >= 100 || suspicion >= 100 || health == 0)
    {
        if (insanity >= 100)
        {
            std::cout << "\nYou commit suicide from your insanity. Your emotions got the ";
            std::cout << "best of you and\nare now considered a coward by the church. " << std::endl;
            getch();
        }
        else if (suspicion >= 100)
        {
            std::cout << "\nClaudius finds out that you have been plotting to kill him!" << std::endl;
            std::cout << "He has you tried for treason and executed the following day. " << std::endl;
        }
        else if (health == 0)
        {
            std::cout << "\nYou have been slain. You have a grand funeral with tons of " << std::endl;
            std::cout << "people showing. You are buried and can not revenge your father." << std::endl;
            std::cout << "Good night, sweet prince, And flights of angels sing thee to thy rest!" << std::endl;
        }
        isDead = true;
        std::cout << "\nCongratulations on losing the game. You are among the many " << std::endl;
        std::cout << "individuals who don't have a knowledge of Hamlet." << std::endl;
        std::cout << "Well I guess its time to say it then.\n\n GAME OVER.\n\n\n\n\n\n";
    }
}



