#pragma once
#include "polygone.h"

class rectangle : public polygone
{
public:
	rectangle();
	rectangle(int _largeur, int _longueur);
	~rectangle();

	float area() override;
	float perimeter() override;

	void decrire();
protected:

private:
};

