#include "..\04 - Classroom - OOP - Operator\Point.h"
#include "Point.h"

#include <iostream>

Point::Point()
{
	// Set to origin at startup
	x_ = y_ = 0;
}

Point::Point(int x, int y)
{
}

Point::Point(double x, double y)
{
	x_ = x;
	y_ = y;
}

void Point::afficher()
{
	std::cout << "Position [" << x_ << ":" << y_ << "]" << std::endl;
}

void Point::saisir()
{
	std::cout << "Entrer la position du point." << std::endl;
	std::cout << "Valeur de l'abcisse" << std::endl;
	std::cin >> x_;
	std::cout << "Valeur de l'ordonnée" << std::endl;
	std::cin >> y_;

	afficher();

}

void Point::deplacer(double dx, double dy)
{
	x_ += dx;
	y_ += dy;
}

double Point::distanceTo(Point destination)
{
	return sqrt((destination.x_ - x_) * (destination.x_ - x_) + (destination.y_ - y_) * (destination.y_ - y_));
}

Point Point::middleOf(Point from, Point to)
{
	Point middle;
	middle.x_ = 0.5f * (from.x_ + to.x_);
	middle.y_ = 0.5f * (from.y_ + to.y_);

	return middle;
}

