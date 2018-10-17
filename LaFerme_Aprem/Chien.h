#pragma once
#include "Animal.h"

class Chien : public Animal
{
public:
	Chien();
	Chien(std::string nom, std::string bruit);
	~Chien();

	void decrire() override;
	void marcher(float distance);
	bool manger(std::string nourriture) override;
};

