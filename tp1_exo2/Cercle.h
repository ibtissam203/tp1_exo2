#pragma once
#include "Point.h"
class Cercle
{
private:
	static double pi;
	int id;
	int rayon;
	Point  centre;
public:
	Cercle(int, int, Point);
	void afficher() const;
	void modifier_rayon(int);
	void translate(int, int);
	float surface() const;
	float perimetre() const;
	bool operator==(const Cercle&) ;
	bool appartenir(const Point&);

	~Cercle();


};

