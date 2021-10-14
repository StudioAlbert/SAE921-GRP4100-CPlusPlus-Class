#pragma once

#include <cstdlib>

class FruitTree
{

protected:
	int nbFruits = 0;
	float fruitWeight = 0; // understand in grams


public:
	//FruitTree();

	void initFruitQuantity();
	float getWeightAvailable();
	float harvest(float);

};

