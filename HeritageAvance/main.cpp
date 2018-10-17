#include "triangle.h"
#include "rectangle.h"
#include <iostream>

int main()
{
	std::cout << polygone::nombreDePolyActuel << std::endl;

	polygone *polygones[5];
	polygones[0] = new triangle(5, 10);
	polygones[1] = new rectangle(8, 8);
	polygones[2] = new triangle(9, 5);
	polygones[3] = new rectangle(6, 9);
	polygones[4] = new triangle(2, 12);

	for (int i = 0; i < 5; ++i)
	{
        polygones[i]->decrire(); // = (*polygone[i]).decrire()
	}

	std::cout << polygone::nombreDePolyActuel << std::endl;

	system("pause");
	return 0;
}
