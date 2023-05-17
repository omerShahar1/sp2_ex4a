#include <sstream>
#include "doctest.h"
#include <stdexcept>
#include "doctest.h"
#include "sources/Team.hpp"
#include "sources/Point.hpp"
#include "sources/Character.hpp"
#include <limits>
#include <vector>

using namespace std;
using namespace ariel;



TEST_CASE("")
{
    
    CHECK_NOTHROW(Point(1.0, 2.0));

    Point p(1.0,2.0);

    CHECK_NOTHROW(p.getX());
    CHECK_NOTHROW(p.getY());

    CHECK_EQ(p.getX(), 1.0);
    CHECK_EQ(p.getY(), 2.0);

    CHECK_NOTHROW(p.distance(Point(3.0,3.0)));
    CHECK_EQ(p.distance(Point(3.0,3.0)), 2.0);

    CHECK_NOTHROW(Character("player", p, 0));

    Character c("player", p, 0);
    CHECK_NOTHROW(c.isAlive());
    CHECK_NOTHROW(c.hit(1));
    CHECK_NOTHROW(c.getName());
    CHECK_NOTHROW(c.getLocation());
    CHECK_NOTHROW(c.print());




    CHECK_NOTHROW(Point (1.0, 2.0));
    CHECK_NOTHROW(Point (1.0, 2.0));
    CHECK_NOTHROW(Point (1.0, 2.0));
    CHECK_NOTHROW(Point (1.0, 2.0));
    CHECK_NOTHROW(Point (1.0, 2.0));
    CHECK_NOTHROW(Point (1.0, 2.0));
    CHECK_NOTHROW(Point (1.0, 2.0));
    CHECK_NOTHROW(Point (1.0, 2.0));
    CHECK_NOTHROW(Point (1.0, 2.0));
    CHECK_NOTHROW(Point (1.0, 2.0));



}