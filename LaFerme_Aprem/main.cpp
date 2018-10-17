#include "Chien.h"
#include "Chat.h"
#include <iostream>

void main()
{
	Chien* chien1 = new Chien();
	Chat* chat1 = new Chat("chat11", "miaou11");
	Chien* chien2 = new Chien("chien22", "ouafouaf22");
	Chat* chat2 = new Chat();
	Chat* chat3 = new Chat("chat33", "mew33");
	Chien* chien3 = new Chien();

	Animal* animaux[6];
	animaux[0] = chien1;
	animaux[1] = chat1;
	animaux[2] = chien2;
	animaux[3] = chien3;
	animaux[4] = chat2;
	animaux[5] = chat3;

	for (int i = 0; i < 6; ++i)
	{
		animaux[i]->decrire();
		animaux[i]->crier();
		animaux[i]->marcher(88.f);
		std::cout << animaux[i]->manger("os") << std::endl << std::endl;
	}

	system("pause");
}	