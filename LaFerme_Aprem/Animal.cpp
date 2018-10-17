#include "Animal.h"
#include <iostream>

Animal::Animal()
{
	nom = "Base";
	bruit = "Blabla";
}

Animal::Animal(std::string _nom, std::string _bruit)
{
	nom = _nom;
	bruit = _bruit;
}

Animal::~Animal()
{
}

void Animal::decrire()
{
	std::cout << "Animal: " << nom << bruit << std::endl;
}

void Animal::crier()
{
	std::cout << nom << " fait " << bruit << std::endl;
}

void Animal::marcher(float distance)
{
	std::cout << "animal marche " << distance << std::endl;
}
