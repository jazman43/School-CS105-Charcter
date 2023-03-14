#include "Mage.h"

Mage::Mage(const std::string& name, Race race):Player(name,race,50,200)
{
}

Mage::Mage()
{}

std::string Mage::attack() const
{
    return "I will crush you with my arcane missiles!";
}
