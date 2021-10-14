// 04 - Exercice - OOP - Inventory.cpp : Ce fichier contient la fonction 'main'. L'exécution du programme commence et se termine à cet endroit.
//

#include <iostream>
#include <vector>

#include "Item.h"

int main()
{
    Item myItem;

    std::vector<Item*> items;

    items.emplace_back(&myItem);

}
