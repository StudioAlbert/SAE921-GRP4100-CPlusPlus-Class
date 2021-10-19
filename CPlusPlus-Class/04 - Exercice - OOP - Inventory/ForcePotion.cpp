#include "ForcePotion.h"

#include <iostream>
#include <ostream>

ForcePotion::ForcePotion(std::string name, std::string description, int buffValue) :
Potion(name, description, buffValue)
{
}

void ForcePotion::use()
{
	std::cout << "I get some strength, " << value_ << " more force." << std::endl;
}

std::string ForcePotion::getType()
{
	return "Force" + Potion::getType();
}

void ForcePotion::display()
{
	Item::display();
	std::cout << "Force augmented : " << value_ << std::endl;
	std::cout << " -- -- -- -- -- -- -- -- -- -- " << std::endl;
}
