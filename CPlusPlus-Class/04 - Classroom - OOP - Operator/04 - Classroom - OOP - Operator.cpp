// 04 - Classroom - OOP - Operator.cpp : Ce fichier contient la fonction 'main'. L'exécution du programme commence et se termine à cet endroit.
//

#include <iostream>

#include "Point.h"

int main()
{

	Point firstPoint(rand() % 20 - 10, rand() % 20 - 10);
	firstPoint.displayPoint();

    Point secondPoint(rand() % 20 - 10, rand() % 20 - 10);
    secondPoint.displayPoint();

    std::cout << "Is first more far than second ? " << (firstPoint > secondPoint) << std::endl;

    (firstPoint + secondPoint).displayPoint();

}
