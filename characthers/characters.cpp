#include "characters.h"
#include <random>

characters::characters(int health, int strength, int agility, int magic, int crit, int dodge, int armor): health_(health), strength_(strength), agility_(agility), magic_(magic), crit_(crit), dodge_(dodge), armor_(armor)
{
}

int characters::critProc(int crit)
{
    int sum = 0;
    if(getNumber(0,20) >=16){
        sum = getDMG(getStrength(),getAgility(),getMagic()); // + våben crit// 
    }else {
        sum = getDMG(getStrength(),getAgility(),getMagic());
    }

    return sum;
}

int characters::dodgdeProt(int dodge, int armor)
{
    return 0;
}

void characters::heal(int health)
{
   // health = health_ + hpbottle.getValue()//
}

int const characters::getDMG(int strength, int agiligty, int maigc)
{
    return 0;
}

void characters::dmgTaken(int health)
{
}

int characters::getNumber(int max, int min)
{
    std::random_device rd;
    std::mt19937 gen(rd());
    std::uniform_int_distribution<> distrib(min,max);
    int random_number = distrib(gen);
    return random_number;
}

int characters::getStrength()
{
    return strength_;
}

int characters::getAgility()
{
    return agility_;
}

int characters::getMagic()
{
    return magic_;
}
