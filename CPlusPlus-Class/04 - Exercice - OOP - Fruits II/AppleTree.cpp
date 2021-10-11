#include "AppleTree.h"

AppleTree::AppleTree() : FruitTree()
{
}

void AppleTree::initFruitQuantity () 
{
	fruitWeight = 0.150f;
	nbFruits = 600 + rand() % 250;
}

