#include "CherryTree.h"

CherryTree::CherryTree() : FruitTree()
{
}

void CherryTree::initFruitQuantity()
{
	fruitWeight = 0.005f;
	nbFruits = 55000 + rand() % 10000;
}

