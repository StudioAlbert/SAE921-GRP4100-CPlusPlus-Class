
#include "Car.h"

#include <iostream>

int main()
{

	Car firstCar("Ford","Mustang", 300);
	Car secondCar("Fiat", "Panda", 13);

	std::cout << firstCar.toString() << std::endl;
	std::cout << secondCar.toString() << std::endl;

}
