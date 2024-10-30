
#include <iostream>
#include "Point.h"
#include "Cercle.h"

int main()
{
    Point* p1 = new Point(2, 3);
    Cercle* c1 = new Cercle(1, 2, *p1);//on a une copie de p1 c'est pour cela il y a un appel à le descructeur car il faut supprimer la copie car on a un passage par valeur dans la creation de cercle
    c1->afficher();

    delete p1;
    delete c1;
}

// Run program: Ctrl + F5 or Debug > Start Without Debugging menu
// Debug program: F5 or Debug > Start Debugging menu

// Tips for Getting Started: 
//   1. Use the Solution Explorer window to add/manage files
//   2. Use the Team Explorer window to connect to source control
//   3. Use the Output window to see build output and other messages
//   4. Use the Error List window to view errors
//   5. Go to Project > Add New Item to create new code files, or Project > Add Existing Item to add existing code files to the project
//   6. In the future, to open this project again, go to File > Open > Project and select the .sln file
