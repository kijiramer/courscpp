#include "Chat.h"
#include <iostream>

Chat::Chat()
{
	nb = 0;
}

Chat::Chat(std::string _nom, std::string _bruit)
	: Animal(_nom, _bruit)
{
	nb = 0;
}

Chat::~Chat()
{
}

void Chat::decrire()
{
	Animal::decrire();
	std::cout << "je suis un chat" << std::endl;
}

bool Chat::manger(std::string nourriture)
{
	if (nourriture == "poisson")
	{
		return true;
	}
	else
	{
		return false;
	}
}