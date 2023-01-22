#ifndef MAGE_H
#define MAGE_H
#include"Player.h"
class Mage : public Player
{
public:
	Mage(std::string name, Race race, int hitPoints, int magicPoints);
	std::string attack() const;
};
#endif