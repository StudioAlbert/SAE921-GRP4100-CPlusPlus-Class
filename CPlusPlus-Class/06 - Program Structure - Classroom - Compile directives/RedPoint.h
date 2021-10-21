#pragma once

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

