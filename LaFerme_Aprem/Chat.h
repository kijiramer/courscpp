#pragma once
#include "Animal.h"
#include <string>

class Chat : public Animal
{
public:
	Chat();
	Chat(std::string nom, std::string bruit);
	~Chat();

	void decrire() override;
	bool manger(std::string nourriture) override;
private:
	int nb;
};

