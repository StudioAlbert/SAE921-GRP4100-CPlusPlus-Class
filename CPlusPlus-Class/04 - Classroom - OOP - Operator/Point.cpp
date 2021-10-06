#include "Point.h"

#include <cmath>
#include <iostream>

void Point::displayPoint()
{
	std::cout << "x : " << x << " y : " << y << std::endl;
}


Point Point::operator+(Point a)
{
	Point middle;
	middle.x = (a.x + this->x) / 2.0f;
	middle.y = (a.y + this->y) / 2.0f;

	return middle;

}

bool Point::operator>(Point a)
{
	float myDistance = sqrt(this->x * this->x + this->y * this->y);
	float aDistance = sqrt(a.x * a.x + a.y * a.y);

	return myDistance > aDistance;
;}

