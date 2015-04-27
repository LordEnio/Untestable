#ifndef PLAYER_H
#define PLAYER_H

class Player
{
    private:

        int health;
        int maxHealth;
        int dmg;
        int suspicion;
        int insanity;
        int score;
        unsigned int level;
        unsigned int exp;
        unsigned int gold;
        bool isDead;

    public:
        Player();

        void setHealth(int);
        void setMaxHealth(int);
        void setDmg(int);
        void setSuspicion(int);
        void setInsanity(int);
        void setScore(int);
        void setLevel(int);
        void setExp(int);
        void setGold(int);
        void setIsDead(bool);

        int const getHealth();
        int const getMaxHealth();
        int const getDmg();
        int const getSuspicion();
        int const getInsanity();
        int const getScore();
        unsigned int const getLevel();
        unsigned int const getExp();
        unsigned int const getGold();
        bool getIsDead();

        unsigned int untilLevel();
        void levelUp();

        int missAttack();
        int Attack();
        int standardAttack();
        int criticalAttack();

        void checkDeath();
};

extern Player Hamlet;

#endif // PLAYER_H
