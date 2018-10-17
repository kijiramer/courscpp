#include "triangle.h"
#include <iostream>

triangle::triangle()
{
	std::cout << "constructeur triangle" << std::endl;
}
triangle::triangle(int _largeur, int _longueur) : polygone(_largeur, _longueur)
{

	std::cout << "constructeur triangle int int" << std::endl;
}

triangle::~triangle()
{
}

float triangle::area()
{
	return (longueur * largeur) / 2.f;
}

void triangle::decrire()
{
	polygone::decrire();
	std::cout << "description triangle" << std::endl;
}

float triangle::perimeter()
{
	return longueur + largeur + largeur;
}
