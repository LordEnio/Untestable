#ifndef GHOSTLING_H
#define GHOSTLING_H

class Ghostling
{
    private:

        unsigned int health;
        unsigned int maxHealth;
        unsigned int dmg;

        bool isDead;

    public:
        Ghostling();

        void setHealth(int);
        void setMaxHealth(int);
        void setDmg(int);
        void setIsDead(bool);

        int const getHealth();
        int const getMaxHealth();
        int const getDmg();
        bool getIsDead();

};

#endif // GHOSTLING_H
