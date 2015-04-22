#ifndef CREATURES_H
#define CREATURES_H

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

        int standardAttack();
        int Attack();
};

class KingHamlet
{
    private:

        unsigned int health;
        unsigned int maxHealth;
        unsigned int dmg;
};


#endif // CREATURES_H
