#include "Priest.h"

Priest::Priest(std::string name, Race race, int hitPoints, int magicPoints) : Player(name, race, hitPoints, magicPoints)
{
	setHitPoints(100);
	setMagicPoints(200);
	setName(name);
	setRace(race);
}
std::string Priest::attack() const
{
	return "I will assault you with Holy Wrath!";
}