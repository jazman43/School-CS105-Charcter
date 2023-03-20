#pragma once
#include "Player.h"

//child class of the player class
class Priest : public Player
{
public:
	//constructors one defult and the other for initialising var
	Priest(const std::string& name, Race race);
	Priest();
	//over ride for the attack function
	std::string attack() const override;

};

