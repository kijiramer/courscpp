#pragma once
#include <string>

class Animal
{
public:
	Animal();
	Animal(std::string nom, std::string bruit);
	~Animal();

	virtual void decrire();

	void crier();
	void marcher(float distance);

	virtual bool manger(std::string nourriture) = 0;

protected:
	std::string nom;
	std::string bruit;
};

