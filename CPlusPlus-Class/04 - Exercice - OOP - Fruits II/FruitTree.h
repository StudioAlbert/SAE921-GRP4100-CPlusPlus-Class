#pragma once

#include <cstdlib>

class FruitTree
{

protected:
	int nbFruits = 0;
	float fruitWeight = 0; // understand in grams


public:

	// To override
	virtual void initFruitQuantity(){};

	// Common functions
	float getWeightAvailable();
	float harvest(float);

};

