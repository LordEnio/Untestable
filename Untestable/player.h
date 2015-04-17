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

        unsigned int levelUp(unsigned int);
        bool levelUp();

};
#endif // STATUS_H
