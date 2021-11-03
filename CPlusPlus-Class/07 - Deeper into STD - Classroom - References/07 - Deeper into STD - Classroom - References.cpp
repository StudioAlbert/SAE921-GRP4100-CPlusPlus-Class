// Reference.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>

class Coordinates {

};

class Point {

public:

    Point() {
    };
    float x, y;
    Coordinates* c;

    void set(float x_, float y_) {
        x = x_;
        y = y_;
    }

};

/*
void setPoint(Point& p_) {
    p_.x = 10;
    p_.y = 10;
}
*/

Point setPoint(Point p_) {
    p_.x = 10;
    p_.y = 10;
    return p_;
}

int main()
{
    Point p;
    Point& q = p;
    Point* r;

    r = nullptr;
    r->x;

    q = setPoint(p);

    std::cout << p.x << ":" << p.y << std::endl;
}
