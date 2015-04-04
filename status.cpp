#ifndef STATUS_HPP
#define STATUS_HPP

class Status
{
  public:
  int health;
  int maxHealth;
  int dmg;
  unsigned int level;
  unsigned int exp;
  
  
    Status(int health, int maxHealth, int dmg, unsigned int level = 1, unsigned int exp)
    {
      this->health = health;
      this->maxHealth = maxHealth;
      this->dmg = dmg;
      this->level = level;
      this->exp = 0;
    }
    Status()
    {
    
    }
    
    
