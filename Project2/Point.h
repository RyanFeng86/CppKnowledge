/*
#include <iostream>
using namespace std;
class Point {
public:
	Point(int x = 0, int y = 0) :x(x), y(y) { cout << "construct a point" << endl; count++; }
	Point(Point const &p);
	~Point() { cout << "Destroy a point" << endl; count--; }
	void move(int a, int b) {
		x = x + a;
		y = y + b;
		cout << "This point has moved to (" << x << ", " << y << ")" << endl;
	}
	int getX() const { return x; }
	int getY() const { return y; }

	static void showCount();
private:
	int x, y;
	static int count;
};
*/