#include "Weapon.h"

#include <iostream>
#include <ostream>

Weapon::Weapon(std::string name, std::string description, int damage):
Item(name,description), damage_(damage)
{
}

int Weapon::getDamage()
{
	return damage_;
}

std::string Weapon::getType()
{
	return "Weapon";
}

void Weapon::use()
{
	std::cout << "Use of a weapon" << std::endl;
}

void Weapon::display()
{
	Item::display();
}
