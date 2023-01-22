#include "Mage.h"

Mage::Mage(std::string name, Race race, int hitPoints, int magicPoints) : Player(name, race, hitPoints, magicPoints)
{
	setHitPoints(150);
	setMagicPoints(150);
	setName(name);
	setRace(race);
}
std::string Mage::attack() const
{
	return "I will crush you with the power of my arcane missiles!";
}