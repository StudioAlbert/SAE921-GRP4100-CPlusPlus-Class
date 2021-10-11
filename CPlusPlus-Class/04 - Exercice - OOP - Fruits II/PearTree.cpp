#include "PearTree.h"

PearTree::PearTree() : FruitTree()
{
}

void PearTree::initFruitQuantity()
{
	fruitWeight = 0.090f;
	nbFruits = 250 + rand() % 100;
}


