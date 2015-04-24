#ifndef PLAYER_H
#define PLAYER_H

class Player
{
    private:

        int health;
        int maxHealth;
        int dmg;
        int suspicion;
        int score;
        unsigned int level;
        unsigned int exp;
        unsigned int gold;

    public:
        Player();

        void setHealth(int);
        void setMaxHealth(int);
        void setDmg(int);
        void setSuspicion(int);
        void setScore(int);
        void setLevel(int);
        void setExp(int);
        void setGold(int);

        int const getHealth();
        int const getMaxHealth();
        int const getDmg();
        int const getSuspicion();
        int const getScore();
        unsigned int const getLevel();
        unsigned int const getExp();
        unsigned int const getGold();

        unsigned int untilLevel();
        bool levelUp();

        int missAttack();
        int Attack();
        int standardAttack();
        int criticalAttack();
};

extern Player Hamlet;

#endif // PLAYER_H
