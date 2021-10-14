#include "HealthPotion.h"

#include <iostream>

HealthPotion::HealthPotion(int healthValue) : Potion(healthValue)
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
    std::cout << getType() << " Health refill " << value_ << std::endl;
}

