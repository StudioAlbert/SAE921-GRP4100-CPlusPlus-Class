#include "CandyBag.h"

#include <iostream>
#include <ostream>

CandyBag::CandyBag()
{
	quantity_ = 0;
}

CandyBag::CandyBag(CandyType type, int quantity)
{
	this->type_ = type;
	this->quantity_ = quantity;
}

void CandyBag::buyCandies(int quantityToBuy)
{
	if(quantityToBuy <= quantity_)
	{
		quantity_ -= quantityToBuy;
	}else
	{
		std::cout << "You ask " << quantityToBuy << " " << getEnumName(type_) << std::endl;
		std::cout << "There is " << quantity_ << " remaining." << std::endl;
		std::cout << "Now the bag is empty." << std::endl;

		quantity_ = 0;

	}
}

