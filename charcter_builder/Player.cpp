#include "Player.h"

// constructor to Initialise var
Player::Player(const std::string& name, Race race, int hitPoints, int magicPoints)
	: name_(name),
	race_(race),
	hitPoints_(hitPoints),
	magicPoints_(magicPoints)
{}

Player::Player()
{}

Player::~Player()
{}
//getters 
std::string Player::getName() const
{
	return name_;
}

Race Player::getRace() const
{
	return race_;
}

int Player::getHitPoints() const
{
	return hitPoints_;
}

int Player::getMagicPoints() const
{
	return magicPoints_;
}
//setters
void Player::setName(const std::string& name)
{
	name_ = name;
}

void Player::setRace(Race race)
{
	race_ = race;
}

void Player::setHitPoints(int hitPoints)
{
	hitPoints_ = hitPoints;
}

void Player::setMagicPoints(int magicPoints)
{
	magicPoints_ = magicPoints;
}
//returns a string of users race
std::string Player::whatRace()
{
	switch (getRace())
	{
	case Race::HUMAN:
		return "Human";
		break;
	case Race::ELF:
		return "Elf";
		break;
	case Race::DWAERF:
		return "Dwarf";
		break;
	case Race::ORC:
		return "Orc";
		break;
	case Race::TROLL:
		return "Troll";
		break;
	default:
		break;
	}

	
}
//defult attack 
std::string Player::attack() const
{
	return "No Attack method defind yet!";
}
