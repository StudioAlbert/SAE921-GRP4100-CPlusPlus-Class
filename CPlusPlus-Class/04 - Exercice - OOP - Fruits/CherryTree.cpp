#include "CherryTree.h"

CherryTree::CherryTree() : FruitTree()
{
	fruitWeight = 0.005f;
	initFruitQuantity();
}

void CherryTree::initFruitQuantity()
{
	nbFruits = 55000 + rand() % 10000;
}

