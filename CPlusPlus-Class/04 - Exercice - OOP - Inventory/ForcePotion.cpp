#include "ForcePotion.h"

#include <iostream>
#include <ostream>

ForcePotion::ForcePotion(int buffValue) : Potion(buffValue)
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
	std::cout << "This is a Force potion [" << value_ << "]" << std::endl;
}
