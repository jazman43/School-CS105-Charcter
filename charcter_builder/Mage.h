#pragma once
#include "Player.h"
//child class of the player class
class Mage : public Player
{
public:
	//constructors one defult and the other for initialising var 
	Mage(const std::string& name, Race race);
	Mage();
	//over ride for the attack function
	std::string attack() const override;

};

