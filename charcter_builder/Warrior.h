#pragma once
#include "Player.h"
//child class of the player class
class Warrior : public Player
{
public:
	//constructors one defult and the other for initialising var
	Warrior(const std::string& name, Race race);
	Warrior();
	//over ride for the attack function
	std::string attack() const override;

	
};

