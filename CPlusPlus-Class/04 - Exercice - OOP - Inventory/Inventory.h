#pragma once
#include <memory>
#include <string>
#include <vector>

#include "Item.h"

class Inventory
{

private:
	std::vector<std::unique_ptr<Item>> items;

public:
	void add(std::unique_ptr<Item> item);
	void display();

	void useAMap(std::string whichMap);
	void drinkHealthPotion();

	void drinkForcePotion();

};

