// 04 - Exercice - OOP - Inventory.cpp : Ce fichier contient la fonction 'main'. L'exécution du programme commence et se termine à cet endroit.
//

#include <iostream>
#include <vector>

#include "ForcePotion.h"
#include "HealthPotion.h"
#include "Inventory.h"
#include "Map.h"


int main()
{
	Inventory myInventory;

	myInventory.add(std::make_unique<Map>("Land of the dead"));
	myInventory.add(std::make_unique<Map>("Geneva"));

	myInventory.add(std::make_unique<HealthPotion>(50));
	myInventory.add(std::make_unique<HealthPotion>(200));

	myInventory.add(std::make_unique<ForcePotion>(10));
	myInventory.add(std::make_unique<ForcePotion>(25));

	myInventory.display();

	myInventory.useAMap("Geneva");
	myInventory.drinkHealthPotion();
	myInventory.drinkHealthPotion();
	myInventory.drinkHealthPotion();

	myInventory.drinkForcePotion();
	myInventory.drinkForcePotion();
	myInventory.drinkForcePotion();

}
