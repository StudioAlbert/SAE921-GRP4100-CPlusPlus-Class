#include "Inventory.h"

#include <iostream>
#include <ostream>

#include "ForcePotion.h"
#include "HealthPotion.h"
#include "Map.h"

void Inventory::add(std::unique_ptr<Item> item)
{
	items.emplace_back(std::move(item));
}

void Inventory::display()
{
	for (const auto& i : items)
	{
		i->display();
	}
}

void Inventory::useAMap(std::string whichMap)
{

	for (auto& i : items)
	{
		Map* myMap = dynamic_cast<Map*>(i.get());

		if(myMap != nullptr)
		{
			//std::cout << "Cast Ok!" << std::endl;
			if (myMap->getLand() == whichMap)
			{
				myMap->use();
				return;
			}
		}

	}

	std::cout << "No map for " << whichMap << std::endl;


}

void Inventory::drinkHealthPotion()
{

	int bestValue = 0;
	auto potionToUse = items.end();

	for(auto itemIterator = items.begin(); itemIterator<items.end(); ++itemIterator)
	{
		HealthPotion* myPotion = dynamic_cast<HealthPotion*>(itemIterator->get());

		if (myPotion != nullptr)
		{
			if (myPotion->getValue() > bestValue)
			{
				bestValue = myPotion->getValue();
				potionToUse = itemIterator;
			}
		}
	}

	if(potionToUse != items.end())
	{
		potionToUse->get()->use();
		items.erase(potionToUse);
	}else
	{
		std::cout << "Sorry, no more health potions." << std::endl;
	}

}

void Inventory::drinkForcePotion()
{

	int bestValue = 0;
	auto potionToUse = items.end();

	for (auto itemIterator = items.begin(); itemIterator < items.end(); ++itemIterator)
	{
		ForcePotion* myPotion = dynamic_cast<ForcePotion*>(itemIterator->get());

		if (myPotion != nullptr)
		{
			if (myPotion->getValue() > bestValue)
			{
				bestValue = myPotion->getValue();
				potionToUse = itemIterator;
			}
		}
	}

	if (potionToUse != items.end())
	{
		potionToUse->get()->use();
		items.erase(potionToUse);
	}else
	{
		std::cout << "No more force potion. Use your brain." << std::endl;
	}

}
