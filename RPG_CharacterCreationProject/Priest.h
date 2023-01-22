#ifndef PRIEST_H
#define PRIEST_H
#include"Player.h"
class Priest : public Player
{
public:
	Priest(std::string name, Race race, int hitPoints, int magicPoints);
	std::string attack() const;
};
#endif
