#include "Item.h"

#include <iostream>

Item::Item(std::string name, std::string description)
: name_(name), description_(description)
{
}

void Item::display()
{
	std::cout << "[" << getType() << "]" << std::endl;
	std::cout << name_ << " is " << description_ << std::endl;
}
