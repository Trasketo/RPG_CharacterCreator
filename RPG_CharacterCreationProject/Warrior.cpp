#include "Warrior.h"

Warrior::Warrior(std::string name,Race race,int hitPoints,int magicPoints) : Player(name, race, hitPoints, magicPoints)
{
	setHitPoints(200);
	setMagicPoints(0);
	setName(name);
	setRace(race);
}
std::string Warrior::attack() const
{
	return "I will destroy you with my sword, foul demon!";
}