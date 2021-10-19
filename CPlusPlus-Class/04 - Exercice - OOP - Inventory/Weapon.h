#pragma once
#include <string>

#include "Item.h"

class Weapon : public Item
{

protected:
	int damage_;

public:
	// constructor
	Weapon(std::string name, std::string description, int damage);

	int getDamage();

	std::string getType() override;
	void use();
	void display();

};

