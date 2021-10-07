#pragma once
class Point
{

private:
	double x_, y_;

public:
	Point();
	Point(double x, double y);

	// input / output
	void afficher();
	void saisir();

	void deplacer(double dx, double dy);
	double distanceTo(Point destination);

	static Point middleOf(Point from, Point to);

};

