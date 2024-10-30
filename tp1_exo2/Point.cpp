#include "Point.h"
#include <math.h>
using namespace std;

Point::Point(int x, int y): x(x),y(y)
{
	cout << "constructeur de Point" << endl;
}

Point::Point(const Point& p):x(p.x),y(p.y)
{
	cout << "constructeur de recopie" << endl;

}

void Point::afficher() const
{
	cout << "x : " << this->x << endl;
	cout << "y : " << this->y << endl;

}

void Point::translate(int dx, int dy)
{
	this->x += dx;
	this->y += dy;
}

bool Point::operator==(const Point& P)
{
	return this->x == P.x && this->y == P.y;
}



double Point::distance(const Point& P) const
{
	return sqrt(pow(this->x - P.x, 2) + pow(this->y - P.y, 2));
}


Point::~Point()
{
	cout << "dtor Point" << endl;
}
