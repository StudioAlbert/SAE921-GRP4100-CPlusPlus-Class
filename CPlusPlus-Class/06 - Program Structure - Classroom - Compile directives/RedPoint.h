#pragma once

#define RED_POINT_DEFINE

#include "Point.h"
class RedPoint :
    public Point
{
public:
	RedPoint() {
        color_ = 0xFF0000;
    }

    RedPoint(float x, float y) : Point(x, y) {};

};

