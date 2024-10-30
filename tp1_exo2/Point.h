#pragma once
#include <iostream>
class Point
{
private:
	int x;
	int y;
public:
	Point(int, int);
	Point( const Point& );
	void afficher() const;
	void translate(int, int);
	bool operator==(const Point&);
	
	double distance(const Point& P) const;

	~Point();
};

