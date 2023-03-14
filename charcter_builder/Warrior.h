#pragma once
#include "Player.h"

class Warrior : public Player
{
public:
	Warrior(const std::string& name, Race race);
	Warrior();

	std::string attack() const override;

	
};

