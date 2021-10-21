// 06 - Program Structure - Classroom - Compile directives.cpp : Ce fichier contient la fonction 'main'. L'exécution du programme commence et se termine à cet endroit.
//
#include <iostream>

#include "GreenPoint.h"
#include "RedPoint.h"


int main()
{

#ifdef RED_POINT_DEFINE
	RedPoint myRedPoint;
#else
	Point myRedPoint;
#endif

	GreenPoint myGreenPoint;

	myRedPoint.x_ = MAX_COORDINATE;

	myGreenPoint.set_x(10);
	myGreenPoint.x_ = 10;

	myGreenPoint.set_y(10);

	myRedPoint.Set(0,0);

	Point simplePoint = ORIGIN;

	std::cout << "Coucou" << std::endl;

}
