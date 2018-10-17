#include "rectangle.h"
#include <iostream>


rectangle::rectangle()
{
	std::cout << "constructeur rectangle" << std::endl;
}


rectangle::rectangle(int _largeur, int _longueur) : polygone(_largeur, _longueur)
{
    std::cout << "constructeur rectangle int int" << std::endl;
}

rectangle::~rectangle()
{
}

float rectangle::area()
{
	return longueur * largeur;
}

float rectangle::perimeter()
{
    float r = (longueur + largeur) * 2.f;
    return r;
}

void rectangle::decrire()
{
	polygone::decrire();
	std::cout << "decrire rectangle" << std::endl;
}


