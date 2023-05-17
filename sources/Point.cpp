#include <stdio.h>
#include <cmath>
#include <iostream>
#include "Point.hpp"

using namespace std;

namespace ariel
{
    Point::Point() : x(0), y(0) {}

    Point::Point(double x, double y) : x(x), y(y) {}
    
    double Point::getX() const
    {
        return x;
    }

    double Point::getY() const
    {
        return y;
    }

    double Point::distance(const Point &temp) const
    {
        return 0.0;
    }

    string Point::print() const
    {
        string out = "0";
        return out;
    }

    Point Point::moveTowards(Point src, Point dest, double distance)
    {
        return Point();
    }

}
