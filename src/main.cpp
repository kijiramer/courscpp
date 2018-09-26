#include <iostream>
#include "lib.h"


int main(){

std::cout<< "Hello" << std::endl;
calcul* calcul1 = new calcul();

std::cout<<calcul1->somme(6,5)<<std::endl;

std::cout<<calcul1->mult(7,3)<<std::endl;

return 0;
}

