#include "Bow.h"

#include <iostream>
#include <random>

Bow::Bow(std::string name, std::string description, int damage, float modifier) :
	Weapon(name, description, damage), difficulty_(modifier)
{
	generator.seed(time(NULL));
	randomRange = std::uniform_int_distribution<int>(1, 20);
}

void Bow::use()
{
	int tirageD20 = randomRange(generator);

	std::cout << "Tirage: " << tirageD20 << " / Difficulty: " << difficulty_ <<std::endl;

	if(tirageD20 >=	 difficulty_)
	{
		std::cout << "TCHAC ! Damages done : " << damage_ << " pts of damage" << std::endl;
	}else
	{
		std::cout << "Miss !" << std::endl;
	}
	
}

std::string Bow::getType()
{
	return "Bow" + Weapon::getType();
}

void Bow::display()
{
	Item::display();
	std::cout << "Damage : " << damage_ << " : Difficulty " << difficulty_ << std::endl;
	std::cout << " -- -- -- -- -- -- -- -- -- -- " << std::endl;
}

