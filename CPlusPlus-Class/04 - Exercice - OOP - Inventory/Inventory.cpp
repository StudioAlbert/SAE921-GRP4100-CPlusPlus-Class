#include "Inventory.h"

#include <iostream>
#include <ostream>

#include "Bow.h"
#include "ForcePotion.h"
#include "HealthPotion.h"
#include "Map.h"
#include "Sword.h"
#include "Weapon.h"

/// <summary>
/// Adds an item to the list (or the vector)
/// </summary>
/// <param name="item">Item to add (Potion, Weapons, Map, etc.)</param>
void Inventory::add(std::unique_ptr<Item> item)
{
	items.emplace_back(std::move(item));
}

/// <summary>
/// Display every items
/// </summary>
void Inventory::displayEveryItems()
{

	std::cout << "Inventory -- -- -- -- -- -- -- -- -- --" << std::endl;
	std::cout << "Nb Items : " << items.size() << std::endl;
	std::cout << std::endl;

	for (const auto& i : items)
	{
		i->display();
	}
}

/// <summary>
/// Consult the map
/// </summary>
/// <param name="landRequest">The land of the map we want to consult.</param>
void Inventory::consultTheMap(std::string landRequest)
{
	// Consult items
	for (auto& i : items)
	{
		// Cast the item object into a map, IF the item is a map
		if(Map* myMap = dynamic_cast<Map*>(i.get()))
		{
			// Check the land of the map
			// Does it correspond to the land requested in parameter
			if (myMap->getLand() == landRequest)
			{
				// Use the map
				myMap->use();
				return;
			}
		}
	}

	// No return in the loop, so no land correspond in the inventory
	std::cout << "No map of " << landRequest << ". You're lost." << std::endl;

}

/// <summary>
/// Here we can drink a potion, preference will be made of the strongest 
/// </summary>
void Inventory::drinkHealthPotion()
{
	// the best value of the potion finally drink
	int bestValue = 0;
	// an iterator on the items
	// This will point on the potion to use and remove it after being drunk 
	auto potionToUse = items.end();

	// Check every items
	// NB : in the next courses, we could imagine a more efficient method.
	// Today, we simply use our actual knwoledges
	for(auto itemIterator = items.begin(); itemIterator<items.end(); ++itemIterator)
	{

		// Check the type and get a pointer on it
		if (HealthPotion* myPotion = dynamic_cast<HealthPotion*>(itemIterator->get()))
		{
			// check the value of the potion
			if (myPotion->getValue() > bestValue)
			{
				bestValue = myPotion->getValue();
				// Memorize the potion
				potionToUse = itemIterator;
			}
		}
	}

	if(potionToUse != items.end())
	{
		// Use the potion 
		potionToUse->get()->use();
		// Move the pointer to here (Then memory will be released after finishing the fucntion)
		std::move(potionToUse->get());
		// Erase from vector
		items.erase(potionToUse);

	}else
	{
		std::cout << "Sorry, no more health potions. Go see a doctor." << std::endl;
	}

}

void Inventory::drinkForcePotion()
{

	// Do the same with Force Potion

}

Weapon* Inventory::equipASword()
{

	int bestDamage = 0;
	auto swordToEquip = items.end();

	// Check every items
	// NB : in the next courses, we could imagine a more efficient method.
	// Today, we simply use our actual knwoledges
	for (auto itemIterator = items.begin(); itemIterator < items.end(); ++itemIterator)
	{

		// Check the type and get a pointer on it
		if (Sword* mySword = dynamic_cast<Sword*>(itemIterator->get()))
		{
			// check the value of the potion
			if (mySword->getDamage() > bestDamage)
			{
				bestDamage = mySword->getDamage();
				// Memorize the potion
				swordToEquip = itemIterator;
			}
		}
	}

	if (swordToEquip != items.end())
	{
		// Use the potion
		/*auto s = swordToEquip->get();
		s->use();*/
		return dynamic_cast<Weapon*>(swordToEquip->get());
		
	}
	else
	{
		return nullptr;
	}
}

Weapon* Inventory::equipABow()
{

	int bestDamage = 0;
	auto bowToEquip = items.end();

	// Check every items
	// NB : in the next courses, we could imagine a more efficient method.
	// Today, we simply use our actual knwoledges
	for (auto itemIterator = items.begin(); itemIterator < items.end(); ++itemIterator)
	{

		// Check the type and get a pointer on it
		if (Bow* myBow = dynamic_cast<Bow*>(itemIterator->get()))
		{
			// check the value of the potion
			if (myBow->getDamage() > bestDamage)
			{
				bestDamage = myBow->getDamage();
				// Memorize the potion
				bowToEquip = itemIterator;
			}
		}
	}

	if (bowToEquip != items.end())
	{
		// Use the potion
		/*auto s = swordToEquip->get();
		s->use();*/
		return dynamic_cast<Weapon*>(bowToEquip->get());

	}
	else
	{
		return nullptr;
	}
}

