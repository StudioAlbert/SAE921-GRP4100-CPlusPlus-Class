#include "Animal.h"


Animal::Animal(int foodInit_)
{
	std::cout << "An animal is born." << std::endl;
	food_ = foodInit_;
}


Animal::~Animal()
{
	std::cout << "An animal is dead." << std::endl;
	std::cout << "Remaining food " << food_ << std::endl;
}


void Animal::eat(int foodToEat_)
{
	std::cout << "An animal is eating." << std::endl;
	food_--;
}


