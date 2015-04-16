#ifndef STATUS_H
#define STATUS_H

class Player
{
    public:
        Player();
        int health;
        int maxHealth;
        int dmg;
        unsigned int level;
        unsigned int exp;
        unsigned int levelUp(unsigned int);
        bool levelUp();
        int suspicion;
        int score;
};
#endif // STATUS_H
