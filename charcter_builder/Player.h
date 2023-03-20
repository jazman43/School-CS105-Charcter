#pragma once
#include <string>
#include <iostream>

//enum of diffrent race types
enum Race
{
	HUMAN,
	ELF,
	DWAERF,
	ORC,
	TROLL
};

//parent class
class Player
{
public:
	//parent consturctor
	Player(const std::string& name, Race race, int hitPoints, int magicPoints);
	//defult parent consturctor
	Player();

	~Player();

	// getters
	std::string getName() const;
	Race getRace() const;
	int getHitPoints() const;
	int getMagicPoints() const;

	//setters
	void setName(const std::string& name);
	void setRace(Race race);
	void setHitPoints(int hitPoints);
	void setMagicPoints(int magicPoints);


	std::string whatRace();

	//Attack method
	virtual std::string attack() const;


protected:
	std::string name_;
	Race race_;
	int hitPoints_;
	int magicPoints_;

};



