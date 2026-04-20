#include "point.hpp"

Point::Point() : x(0), y(0){}

Point::Point(int _x, int _y) : x(_x), y(_y){}

void Point::setX(int _x)
{ 
    x = _x; 
}

void Point::setY(int _y)
{ 
    y = _y; 
}

int Point::getX() const 
{ 
    return x; 
}

int Point::getY() const 
{ 
    return y; 
}