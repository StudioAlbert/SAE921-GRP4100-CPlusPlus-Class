#include "AppleTree.h"

AppleTree::AppleTree()// : FruitTree()
{	
	fruitWeight = 0.150f;
	initFruitQuantity();

}

void AppleTree::initFruitQuantity()
{
	nbFruits = 600 + rand() % 250;
}

