#pragma once 
#include <string>
#include <ctime>

class characters
{
private:
    int health_;
    int strength_;
    int agility_;
    int magic_;
    int crit_;
    int dodge_;
    int armor_;
public:
    characters(int health, int strength, int agility, int magic, int crit, int dodge, int armor);
    int critProc(int crit);
    int dodgdeProt(int dodge, int armor);
    void heal(int health);
    int const getDMG(int strength, int agiligty, int maigc);
    void dmgTaken(int health);
    int getNumber(int max, int min);
    int getStrength();
    int getAgility();
    int getMagic();
};


