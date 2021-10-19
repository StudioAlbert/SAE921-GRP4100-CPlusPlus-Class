#include "Potion.h"

Potion::Potion(std::string name, std::string description,  int value) :
Item(name, description),
value_(value)
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
