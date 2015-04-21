#ifndef STATUS_H
#define STATUS_H

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

    public:
        Player();

        void setHealth(int);
        void setMaxHealth(int);
        void setDmg(int);
        void setSuspicion(int);
        void setScore(int);
        void setLevel(int);
        void setExp(int);

        int const getHealth();
        int const getMaxHealth();
        int const getDmg();
        int const getSuspicion();
        int const getScore();
        unsigned int const getLevel();
        unsigned int const getExp();

        unsigned int untilLevel();
        bool levelUp();
};

extern Player Hamlet;

#endif // STATUS_H
