#pragma once
#include <memory>
#include <string>
#include <vector>

#include "Item.h"
#include "Sword.h"
#include "Weapon.h"

class Inventory
{

private:
	std::vector<std::unique_ptr<Item>> items;

public:
	void add(std::unique_ptr<Item> item);
	void displayEveryItems();

	void consultTheMap(std::string landRequest);
	void drinkHealthPotion();

	void drinkForcePotion();

	Weapon* equipASword();
	Weapon* equipABow();
	
};

