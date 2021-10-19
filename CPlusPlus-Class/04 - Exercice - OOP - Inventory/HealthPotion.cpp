#include "HealthPotion.h"

#include <iostream>

HealthPotion::HealthPotion(std::string name, std::string description, int healthValue):
Potion(name, description, healthValue)
{
}

void HealthPotion::use()
{
    std::cout << "Hmmmm, I feel better. Health recovered [" << value_ << "]" << std::endl;
}

std::string HealthPotion::getType()
{
    return "Health" + Potion::getType();
}

void HealthPotion::display()
{
    Item::display();
	std::cout << "Health refill " << value_ << std::endl;
    std::cout << " -- -- -- -- -- -- -- -- -- -- " << std::endl;
}

