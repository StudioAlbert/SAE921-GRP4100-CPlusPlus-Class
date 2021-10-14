#include "PearTree.h"

PearTree::PearTree()// : FruitTree()
{
	fruitWeight = 0.090f;
	initFruitQuantity();
}

void PearTree::initFruitQuantity()
{
	nbFruits = 250 + rand() % 100;
}


