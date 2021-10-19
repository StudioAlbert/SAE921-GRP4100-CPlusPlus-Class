#ifndef POINT_CLASS_DEFINE
#define POINT_CLASS_DEFINE


#define MAX_COORDINATE 1000

#define set_x(x) x_ = x
#define set_y(y) y_ = y

#define ORIGIN Point(0,0)

class Point
{
protected:
	double color_ = 0x0;

public:
	float x_, y_;
	Point();
	Point(float, float);

	void Set(float, float);

};
#endif

