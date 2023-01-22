#ifndef WARRIOR_H
#define WARRIOR_H
#include"Player.h"

class Warrior : public Player
{
	public:
		Warrior(std::string name, Race race, int hitPoints, int magicPoints);
		std::string attack() const;
};
#endif
