#ifndef PLAYER_H
#define PLAYER_H
#include <string>
#include<iostream>
#include "Race.h"
#define stringify( name ) #name


class Player
{
    private:
        std::string name;
        Race race;
        int hitPoints;
        int magicPoints;
    public:
        Player(std::string name,Race race,int hitPoints,int magicPoints);
        std::string getName()const;
        Race getRace()const;
        std::string whatRace()const;
        int getHitPoints()const;
        int getMagicPoints()const;
        void setName(std::string name);
        void setRace(Race race);
        void setHitPoints(int hitPoints);
        void setMagicPoints(int magicPoints);
        virtual std::string attack()const = 0;
};

#endif