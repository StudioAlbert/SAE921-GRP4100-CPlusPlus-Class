#include "FruitTree.h"

FruitTree::FruitTree()
{
	//initFruitQuantity();
}

float FruitTree::getWeightAvailable()
{
	return static_cast<float>(nbFruits) * fruitWeight;
}

float FruitTree::harvest(float weightToHarvest)
{

	int nbFruitToHarvest;

	if(getWeightAvailable() > weightToHarvest)
	{
		nbFruitToHarvest = static_cast<int>(floorf(weightToHarvest / fruitWeight));
		if(nbFruitToHarvest <= 0)
		{
			nbFruitToHarvest = 1;
		}

	}else
	{
		nbFruitToHarvest = nbFruits;
	}

	nbFruits -= nbFruitToHarvest;
	return nbFruitToHarvest * fruitWeight;

}
