#include <iostream>
#include <vector>

#include "Player.h"
#include "Warrior.h"
#include "Mage.h"
#include "Priest.h"



int main()
{
	//create parent class
	Player player;
	

	//creates a list for each child class
	std::vector<Warrior> warriors;
	std::vector<Mage> mages;
	std::vector<Priest> priests;

	
	int choice;
	int raceChoice;
	std::string playerName;
	bool gameOver{ 1 };
	//main loop
	while (true)
	{
		//displays menu to user
		std::cout << "\n\n\t\tCHARCTER CREATION!\n";
		std::cout << "Which of the following would you like?\n";
		std::cout << "\t-1. Create a Warrior!\n";
		std::cout << "\t-2. Create a Mage!\n";
		std::cout << "\t-3. Create a Priest!\n";
		std::cout << "\t-4. Finish creating player charcters!\n";
		std::cout << "Your Choice: ";
		std::cin >> choice;

		//exits main loop and ends app
		if (choice == 4) {
			break;
		}

		
		//displays race menu to user
		std::cout << "\nWhich race do you want?\n";
		std::cout << "\t-1. Human!\n";
		std::cout << "\t-2. Elf!\n";
		std::cout << "\t-3. Dwarf!\n";
		std::cout << "\t-4. Orc!\n";
		std::cout << "\t-5. Troll!\n";
		std::cout << "Your Choice: ";
		std::cin >> raceChoice;
		//displays and askes for user to enter name for character
		std::cout << "\nWhat would you like to name your character? : ";
		std::cin >> playerName;
		//stores name in parent class var
		player.setName(playerName);

		//sets character race and stores in into parent class var
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
		
		//creates a character class and stores them into a list of ther type		
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
			Priest priest_(player.getName(), player.getRace());
			priests.push_back(priest_);
			break;
		}
			
		
		default:
			std::cout << "incorrect input";
			break;
		}
	}
	//displays all characters to user with names race and attack displayed
	std::cout << "\n*********************************************\n\t\tWARRIORS\n";

	for (Warrior warrior : warriors) {
		
		
		std::cout << "i am a warrior with the name " << warrior.getName() << " ";
		std::cout << "and with the race " << warrior.whatRace() << " ";
		std::cout << "and my attack is: " << warrior.attack() << "\n\n";
	}
	std::cout << "\n*********************************************\n\t\tMAGES\n";
	for (Mage mage : mages) {
		
		std::cout << "i am a mage with the name " << mage.getName() << " ";
		std::cout << "and with the race " << mage.whatRace() << " ";
		std::cout << "and my attack is: " << mage.attack() << "\n\n";
	}

	std::cout << "\n*********************************************\n\t\tPRIESTS\n";
	for (Priest	priest : priests) {
		
		std::cout << "i am a priest with the name " << priest.getName() << " ";
		std::cout << "and with the race " << priest.whatRace() << " ";
		std::cout << "and my attack is: " << priest.attack() << "\n\n";
	}

	std::cin >> choice;
	return 0;
}