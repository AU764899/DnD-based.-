#pragma once
#include <string>
#include <ctime>

class monsters
{
public:
    monsters(int health, int strength, int agility, int magic, int crit, int dodge, int armor);
    int critProc(int crit);
    int dodgeProc(int dodge, int armor);
    void heal(int health);
    void DmgTaken(int health);
    int getDmg(int strength, int agility, int magic) const;
    int getNumber(int max, int min);
    int getStrength();
    int getAgility();
    int getMagic();

private:
    int health_;
    int strength_;
    int agility_;
    int magic_;
    int crit_;
    int dodge_;
    int armor_;

};