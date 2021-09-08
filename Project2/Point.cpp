
#include "point.h"
#include <iostream>
using namespace std;
int Point::count = 0;

void Point::showCount() {
	cout << "Object count=" << count << endl;
}

Point::Point(Point const &p) :x(p.x), y(p.y) {}



