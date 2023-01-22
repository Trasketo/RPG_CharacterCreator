#include<iostream>
#include"Player.h"
#include<iomanip>
#include<vector>
#include"Mage.h"
#include"Warrior.h"
#include"Priest.h"

void makeCharacter(std::vector<std::vector<Player*>> & playerHolder);
void addCharacter(std::vector<std::vector<Player*>> & playerHolder, int type, std::string name, Race race);
Race int2Enum(int myint);
void displayCharacter(std::vector<std::vector<Player*>> playerHolder);
void clearVecTypeVec(std::vector<std::vector<Player*>>& playerHolder);

int main()
{
	std::vector<std::vector<Player*>> mainVec
	{
		{},{},{}
	};
	makeCharacter(mainVec);
	displayCharacter(mainVec);
	clearVecTypeVec(mainVec);

	std::cout << "Program done!" << std::endl;
	return 0;
}

//create a character and add character to Vector
void makeCharacter(std::vector<std::vector<Player*>> & playerHolder)
{
	int userNumInput = -1, category;
	std::string userStringInput;
	


	while (userNumInput != 0)
	{
		std::cout << "Which of the following would you like?\n";
		std::cout << std::setw(10) << " " << "1 - Create a Warrior\n";
		std::cout << std::setw(10) << " " << "2 - Create a Priest\n";
		std::cout << std::setw(10) << " " << "3 - Create a Mage\n";
		std::cout << std::setw(10) << " " << "0 - finish creating player characters" << std::endl;

		std::cin >> userNumInput;

		if (userNumInput == 0) break;
		category = userNumInput - 1;

		std::cout << "What would like to name your character?\n";
		std::cin >> userStringInput;

		std::cout << "Now, whic race do you want?\n";
		std::cout << std::setw(10) << " " << "1 - Human\n";
		std::cout << std::setw(10) << " " << "2 - Elf\n";
		std::cout << std::setw(10) << " " << "3 - Dwarf\n";
		std::cout << std::setw(10) << " " << "4 - Orc\n";
		std::cout << std::setw(10) << " " << "5 - Troll" << std::endl;
		std::cin >> userNumInput;


		addCharacter(playerHolder, category, userStringInput, int2Enum(userNumInput - 1));


	}


}

//add charater to vector
void addCharacter(std::vector<std::vector<Player*>> & playerHolder, int type, std::string name, Race race)
{
	Player* temp;
	switch (type)
	{
		case 0:
			temp = new Warrior(name, race, 0, 0);
			break;
		case 1:
			temp = new Priest(name, race, 0, 0);
			break;
		case 2:
			temp = new Mage(name, race, 0, 0);
			break;
			
	}
	playerHolder[type].push_back(temp);
}

//turns int to enum
Race int2Enum(int myint)
{
	switch(myint)
	 {
		case 0:
			return HUMAN;
			break;
		case 1:
			return ELF;
			break;
		case 2:
			return DWARF;
			break;
		case 3:
			return ORC;
			break;
		case 4:
			return TROLL;
			break;
	 }
}

void displayCharacter(std::vector<std::vector<Player*>> playerHolder)
{
	for (int i = 0; i < playerHolder.size(); i++)
	{
		for (Player* at : playerHolder[i])
		{
			switch (i)
			{
				case 0:
					std::cout << "I'm a " << ((Warrior*)at)->whatRace() << " and my attack is : " << ((Warrior*)at)->attack() << std::endl;
					break;
				case 1:
					std::cout << "I'm a " << ((Priest*)at)->whatRace() << " and my attack is : " << ((Priest*)at)->attack() << std::endl;
					break;
				case 2:
					std::cout << "I'm a " << ((Mage*)at)->whatRace() << " and my attack is : " << ((Mage*)at)->attack() << std::endl;
					break;
			}
				
		}
	}
}

void clearVecTypeVec(std::vector<std::vector<Player*>>& targetVec)
{
	for (int i = 0; i < targetVec.size(); i++)
	{
		for (Player* at : targetVec[i])
		{
			delete at;
		}
		targetVec[i].clear();
	}
}