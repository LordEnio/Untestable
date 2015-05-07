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
        bool checkDeath();

        int standardAttack();
        int Attack();
};

class KingHamlet
{
    private:

        unsigned int health;
        unsigned int maxHealth;
        unsigned int dmg;

        bool isDead;
        bool curse;

    public:
        KingHamlet();

        void setHealth(int);
        void setMaxHealth(int);
        void setDmg(int);

        void setIsDead(bool);
        void setCurse(bool);

        int const getHealth();
        int const getMaxHealth();
        int const getDmg();

        bool getIsDead();
        bool checkDeath();

        bool getCurse();

        int standardAttack();
        int Curse();
        int Attack();
};

class OldMan
{
    private:
        unsigned int health;
        unsigned int maxHealth;
        unsigned int dmg;

        bool isDead;

    public:
        OldMan();

        void setHealth(int);
        void setMaxHealth(int);
        void setDmg(int);
        void setIsDead(bool);

        int const getHealth();
        int const getMaxHealth();
        int const getDmg();
        bool getIsDead();
        bool checkDeath();

        int standardAttack();
        int Attack();
};

class Claudius
{
    private:
        unsigned int health;
        unsigned int maxHealth;
        unsigned int dmg;

        bool isDead;

    public:
        Claudius();

        void setHealth(int);
        void setMaxHealth(int);
        void setDmg(int);
        void setIsDead(bool);

        int getHealth();
        int getMaxHealth();
        int getDmg();
        bool getIsDead();

        bool checkDeath();

        int standardAttack();
        int Attack();
};

class Polonius
{
    private:
        unsigned int health;
        unsigned int maxHealth;
        unsigned int dmg;

        bool isDead;

    public:
        Polonius();

        void setHealth(int);
        void setMaxHealth(int);
        void setDmg(int);
        void setIsDead(bool);

        int getHealth();
        int getMaxHealth();
        int getDmg();
        bool getIsDead();

        bool checkDeath();

        int standardAttack();
        int Attack();
};



#endif // CREATURES_H
