#include "Chien.h"
#include <iostream>

Chien::Chien()
: Animal() 
{
}

Chien::Chien(std::string _nom, std::string _bruit)
: Animal(_nom, _bruit)
{
}

Chien::~Chien()
{
}

void Chien::decrire()
{
	Animal::decrire();
	std::cout << "Je suis un chien" << std::endl;
}

bool Chien::manger(std::string nourriture)
{
	if (nourriture == "os")
	{
		return true;
	}
	else
	{
		return false;
	}
}

void Chien::marcher(float distance)
{
	std::cout << "chien marche " << distance << std::endl;
}
