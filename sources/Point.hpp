#pragma once

#include <stdio.h>
#include <iostream>
#include <stdexcept>
#include <limits>
#include <sstream>
#include <fstream>
#include <string>

using namespace std;

namespace ariel
{
    class Point
    {
    private:
        double x, y;

    public:
        Point();

        Point(double, double);

        double getX() const;

        double getY() const;

        double distance(const Point &temp) const;

        string print() const;

        static Point moveTowards(Point, Point, double);
    };
};