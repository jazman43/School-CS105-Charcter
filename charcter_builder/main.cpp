#include <iostream>
#include <vector>

#include "Player.h"
#include "Warrior.h"
#include "Mage.h"
#include "Priest.h"



int main()
{
	Player player;
	Warrior warrior;
	Mage mage;
	Priest priest;

	std::vector<Warrior> warriors;
	std::vector<Mage> mages;
	std::vector<Priest> priests;

	int choice;
	int raceChoice;
	std::string playerName;
	bool gameOver{ 1 };

	while (gameOver)
	{
		std::cout << "\n\n\t\tCHARCTER CREATION!\n";
		std::cout << "Which of the following would you like?\n";
		std::cout << "\t-1. Create a Warrior!\n";
		std::cout << "\t-2. Create a Mage!\n";
		std::cout << "\t-3. Create a Priest!\n";
		std::cout << "\t-4. Finish creating player charcters!\n";
		std::cout << "Your Choice: ";
		std::cin >> choice;

		if (choice == 4) {
			gameOver = 0;
			break;
		}

		if (gameOver)
		{
			std::cout << "\nWhich race do you want?\n";
			std::cout << "\t-1. Human!\n";
			std::cout << "\t-2. Elf!\n";
			std::cout << "\t-3. Dwarf!\n";
			std::cout << "\t-4. Orc!\n";
			std::cout << "\t-5. Troll!\n";
			std::cout << "Your Choice: ";
			std::cin >> raceChoice;

			std::cout << "\nWhat would you like to name your character? : ";
			std::cin >> playerName;
			player.setName(playerName);

			switch (raceChoice)
			{
			case 1:
				player.setRace(Race::HUMAN);
				break;
			case 2:
				player.setRace(Race::ELF);
				break;
			case 3:
				player.setRace(Race::DWAERF);
				break;
			case 4:
				player.setRace(Race::ORC);
				break;
			case 5:
				player.setRace(Race::TROLL);
				break;
			default:
				std::wcout << "incorrect input";
				break;
			}
		}
				
		switch (choice)
		{
		case 1:
		{
			Warrior warrior_(player.getName(), player.getRace());
			warriors.push_back(warrior_);
			break;
		}
		case 2:
		{
			Mage mage_(player.getName(), player.getRace());
			mages.push_back(mage_);
			break;
		}
		case 3:
		{
			Mage mage_(player.getName(), player.getRace());
			priests.push_back(priest);
			break;
		}
			
		
		default:
			std::cout << "incorrect input";
			break;
		}
	}

	std::cout << "\n*********************************************\n\t\tWARRIORS\n";

	for (Warrior warrior : warriors) {
		
		Race warriorRace = warrior.getRace();
		std::string raceName;
		switch (warriorRace)
		{
		case Race::HUMAN:
			raceName = "Human";
			break;
		case Race::ELF:
			raceName = "Elf";
			break;
		case Race::DWAERF:
			raceName = "Dwarf";
			break;
		case Race::ORC:
			raceName = "Orc";
			break;
		case Race::TROLL:
			raceName = "Troll";
			break;
		default:
			break;
		}
		std::cout << "i am a warrior with the name " << warrior.getName() << " ";
		std::cout << "and with the race " << raceName << " ";
		std::cout << "and my attack is: " << warrior.attack() << "\n\n";
	}
	std::cout << "\n*********************************************\n\t\tMAGES\n";
	for (Mage mage : mages) {
		Race mageRace = mage.getRace();
		std::string raceName;
		switch (mageRace)
		{
		case Race::HUMAN:
			raceName = "Human";
			break;
		case Race::ELF:
			raceName = "Elf";
			break;
		case Race::DWAERF:
			raceName = "Dwarf";
			break;
		case Race::ORC:
			raceName = "Orc";
			break;
		case Race::TROLL:
			raceName = "Troll";
			break;
		default:
			break;
		}
		std::cout << "i am a mage with the name " << mage.getName() << " ";
		std::cout << "and with the race " << raceName << " ";
		std::cout << "and my attack is: " << mage.attack() << "\n\n";
	}

	std::cout << "\n*********************************************\n\t\tPRIESTS\n";
	for (Priest	priest : priests) {
		Race priestRace = priest.getRace();
		std::string raceName;
		switch (priestRace)
		{
		case Race::HUMAN:
			raceName = "Human";
			break;
		case Race::ELF:
			raceName = "Elf";
			break;
		case Race::DWAERF:
			raceName = "Dwarf";
			break;
		case Race::ORC:
			raceName = "Orc";
			break;
		case Race::TROLL:
			raceName = "Troll";
			break;
		default:
			break;
		}
		std::cout << "i am a priest with the name " << priest.getName() << " ";
		std::cout << "and with the race " << raceName << " ";
		std::cout << "and my attack is: " << priest.attack() << "\n\n";
	}

	system("pause>0");
	return 0;
}