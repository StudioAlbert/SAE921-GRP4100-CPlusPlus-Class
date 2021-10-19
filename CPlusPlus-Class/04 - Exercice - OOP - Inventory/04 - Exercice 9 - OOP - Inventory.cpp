// 04 - Exercice - OOP - Inventory.cpp : Ce fichier contient la fonction 'main'. L'exécution du programme commence et se termine à cet endroit.
//

#include <iostream>
#include <vector>

#include "Bow.h"
#include "ForcePotion.h"
#include "HealthPotion.h"
#include "Inventory.h"
#include "Map.h"
#include "Sword.h"


int main()
{
	Inventory myInventory;
	std::unique_ptr<Weapon*> myWeapon;

	myInventory.add(std::make_unique<Map>("Map 1", "Found on a corpse","Land of the dead"));
	myInventory.add(std::make_unique<Map>("Map 2", "A city","Geneva"));

	myInventory.add(std::make_unique<HealthPotion>("Medic", "Some life more", 50));
	myInventory.add(std::make_unique<HealthPotion>("Relife", "The magic potion", 200));

	myInventory.add(std::make_unique<ForcePotion>("Blue pills", "Feel right for the night", 10));
	myInventory.add(std::make_unique<ForcePotion>("Maximator", "Big chunks in your head", 25));

	myInventory.add(std::make_unique<Sword>("Excalibur", "The almighty sword", 100, 2.0f));
	myInventory.add(std::make_unique<Bow>("Legolo", "a composite arc", 45, 13));

	myInventory.displayEveryItems();

	myInventory.consultTheMap("Geneva");

	myInventory.drinkHealthPotion();
	myInventory.drinkHealthPotion();
	myInventory.drinkHealthPotion();

	myInventory.drinkForcePotion();
	myInventory.drinkForcePotion();
	myInventory.drinkForcePotion();

	// Get a unique pointer out of the items
	Weapon* playerWeapon = myInventory.equipASword();
	if(playerWeapon != nullptr)
	{
		playerWeapon->use();
	}

	playerWeapon = myInventory.equipABow();
	if(playerWeapon != nullptr)
	{
		for (int i = 0; i < 3; ++i)
		{
			playerWeapon->use();
		}
	}


}
