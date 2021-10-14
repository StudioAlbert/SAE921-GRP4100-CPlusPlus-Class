#include "Potion.h"

Potion::Potion(int value) : value_(value)
{
	
}

int Potion::getValue()
{
	return value_;
}


std::string Potion::getType()
{
	return "Potion";
}
