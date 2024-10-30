#include "Cercle.h"
#include "string"
#include <math.h>
using namespace std;

double Cercle::pi = 3.14;

Cercle::Cercle(int id, int r, Point c)
	:id(id),rayon(r),centre(c)
{
	cout << "constructeur de Cercle" << endl;

}

void Cercle::afficher() const
{
	cout << "id : " << this->id << endl;
	cout << "rayon : " << this->rayon << endl;
	 this->centre.afficher() ;
	
}

void Cercle::modifier_rayon(int nr)
{
	this->rayon = nr;
}

void Cercle::translate(int dx, int dy)
{
	this->centre.translate(dx, dy);
}

float Cercle::surface() const
{
	return pow(this->rayon, 2) * pi;
}

float Cercle::perimetre() const
{
	return 2 * pi * this->rayon;
}

bool Cercle::operator==(const Cercle& c) 
{
	return (this->centre == c.centre) && (this->rayon==c.rayon);
}

bool Cercle::appartenir(const Point& p)
{
	return this->centre.distance(p) <= this->rayon;
}

Cercle::~Cercle()
{
	cout << "dtor de Cercle" << endl;
}
