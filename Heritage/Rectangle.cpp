#include "Rectangle.h"
#include <iostream>

Rectangle::Rectangle()
{
}

Rectangle::Rectangle(int _largeur, int _longueur)
: Polygone(_largeur, _longueur)
{
}

Rectangle::~Rectangle()
{
}

void Rectangle::decrire()
{
    Polygone::decrire();
    cout << "decrire rectangle" << endl;
}
