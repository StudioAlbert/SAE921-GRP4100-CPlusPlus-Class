#include "Point.h"

#include <cmath>
#include <iostream>

Point::Point(float x, float y)
{
	x_ = x;
	y_ = y;
}


void Point::displayPoint()
{
	std::cout << "x : " << x_ << " y : " << y_ << std::endl;
}


Point Point::operator+(Point a)
{
	Point middle = Point((a.x_ + this->x_) / 2.0f , (a.y_ + this->y_) / 2.0f);
	return middle;

}

Point& Point::operator+=(Point a)
{
	this->x_ += a.x_;
	this->y_ += a.y_;

	return *this;
}

bool Point::operator>(Point a)
{
	float myDistance = sqrt(this->x_ * this->x_ + this->y_ * this->y_);
	float aDistance = sqrt(a.x_ * a.x_ + a.y_ * a.y_);

	return myDistance > aDistance;
}

bool Point::operator<(Point a)
{
	float myDistance = sqrt(this->x_ * this->x_ + this->y_ * this->y_);
	float aDistance = sqrt(a.x_ * a.x_ + a.y_ * a.y_);

	return myDistance < aDistance;
}

