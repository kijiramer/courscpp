#include "Triangle.h"
#include <iostream>

Triangle::Triangle()
{
    cout << "constructeur triangle" << endl;
}

Triangle::Triangle(int _largeur, int _longueur) : Polygone(_largeur, _longueur)
{
    cout << "constructeur triangle int int" << endl;
}

Triangle::~Triangle()
{

}

void Triangle::decrire()
{
    Polygone::decrire();
    cout << "decrire triangle" << endl;
}

