#include "polygone.h"
#include <iostream>

int polygone::nombreDePolyActuel = 0;

polygone::polygone()
{
	largeur = 1;
	longueur = 1;
	nombreDePolyActuel++;
	std::cout << "constructeur polygone" << std::endl;
}

polygone::polygone(int _largeur, int _longueur)
{
	largeur = _largeur;
	longueur = _longueur;
	nombreDePolyActuel++;

	std::cout << "constructeur polygone int int" << std::endl;
}

polygone::~polygone()
{
	nombreDePolyActuel--;
}

void polygone::decrire()
{
	std::cout << largeur << ";"<< longueur << " / " << area() << " / " << perimeter() << std::endl;
}