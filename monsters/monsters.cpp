#include "monsters.h"
#include <random>

monsters::monsters(int health, int strength, int agility, int magic, int crit, int dodge, int armor)
: health_(health),strength_(strength), agility_(agility), magic_(magic), crit_(crit), dodge_(dodge), armor_(armor)
{
}

int monsters::critProc(int crit)
{
    int sum = 0;
    if(getNumber(0,20) > 15)
    {
        sum = getDmg(getStrength(),getAgility(),getMagic()); // + WeaponCrit
    }
    else
    {
        sum = getDmg(getStrength(),getAgility(),getMagic()); 
    }
    return sum;
}

int monsters::dodgeProc(int dodge, int armor)
{
    return 0;
}

void monsters::heal(int health)
{
    health = health_; // + hpbottle.get_value()
}

int monsters::getDmg(int strength, int agility, int magic) const
{
    return 0;
}

void monsters::DmgTaken(int health)
{
}

int monsters::getNumber(int max, int min)
{
    std::random_device rd;
    std::mt19937 gen(rd());
    std::uniform_int_distribution<> distrib(min, max);
    
    int random_number = distrib(gen);
    return random_number;
}

int monsters::getStrength()
{
    return strength_;
}

int monsters::getAgility()
{
    return agility_;
}

int monsters::getMagic()
{
    return magic_;
}
