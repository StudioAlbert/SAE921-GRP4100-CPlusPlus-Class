#include "Map.h"

#include <iostream>

Map::Map(std::string land) : land_(land)
{
}

void Map::use()
{
	std::cout << "This is the map of " << land_ << ". You're lost." << std::endl;
}

void Map::display()
{
	std::cout << "A map of " << land_ << std::endl;
}

std::string Map::getType()
{
	return "map";
}

std::string Map::getLand()
{
	return land_;
}
