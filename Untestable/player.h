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

        int getHealth();
        int getMaxHealth();
        int getDmg();
        int getSuspicion();
        int getScore();
        unsigned int getLevel();
        unsigned int getExp();
};
#endif // STATUS_H
