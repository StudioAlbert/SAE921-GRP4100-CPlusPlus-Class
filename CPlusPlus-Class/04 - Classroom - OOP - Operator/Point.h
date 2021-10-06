#pragma once
class Point
{

public:
	float x;
	float y;

	void displayPoint();

	static float distance(Point a, Point b);
	static Point middle(Point a, Point b);

	Point operator+(Point a);
	bool operator>(Point a);

};

