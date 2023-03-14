#pragma once
#include "Player.h"


class Priest : public Player
{
public:
	Priest(const std::string& name, Race race);
	Priest();

	std::string attack() const override;

};

