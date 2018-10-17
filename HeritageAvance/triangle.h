#pragma once
#include "polygone.h"

class triangle : public polygone
{
public:
	triangle();
	triangle(int _largeur, int _longueur);
	~triangle();

	float area() override;
	float perimeter() override;

	void decrire();

private:
    
    
};

