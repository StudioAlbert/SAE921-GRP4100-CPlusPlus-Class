#pragma once
class Point
{

public:
	float x_;
	float y_;

	Point();
	Point(float x, float y);

	void displayPoint();

	Point operator+(Point a);

	Point& operator+=(Point a);

	bool operator>(Point a);
	bool operator<(Point a);

};

