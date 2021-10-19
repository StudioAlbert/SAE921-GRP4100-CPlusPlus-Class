#include "Sword.h"

#include <iostream>

Sword::Sword(std::string name, std::string description, int damage, float modifier) :
	Weapon(name, description, damage), modifier_(modifier)
{
}

void Sword::use()
{
	std::cout << "BAM ! Damages done : " << (static_cast<float>(damage_) * modifier_) << " pts of damage" << std::endl;
}

std::string Sword::getType()
{
	return "Sword" + Weapon::getType();
}

void Sword::display()
{
	Item::display();
	std::cout << "Damage : " << damage_ << " x " << modifier_ << std::endl;
	std::cout << " -- -- -- -- -- -- -- -- -- -- " << std::endl;
}

