#include "Map.h"

#include <iostream>

Map::Map(std::string name, std::string description, std::string land) :
land_(land),
Item(name, description)
{
}

void Map::use()
{
	std::cout << "This is the map of " << land_ << ". You're lost." << std::endl;
}

void Map::display()
{
	Item::display();
	std::cout << "A map of " << land_ << std::endl;
	std::cout << " -- -- -- -- -- -- -- -- -- -- " << std::endl;
}

std::string Map::getType()
{
	return "map";
}

std::string Map::getLand()
{
	return land_;
}
