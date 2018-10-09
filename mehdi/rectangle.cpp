//
//  rectangle.cpp
//  
//
//  Created by Mehdi AKOUNAD on 04/10/2018.
//

#include "rectangle.hpp"
#include <iostream>

using namespace std;

void rectangle::perimetre(float longueur, float largeur){
    
    float resulat = ((longueur + largeur) * 2);
    
    cout << "Le perimetre du rectangle est :" << resulat << endl;
}

void rectangle::air(float longueur, float largeur){
    
    float resulat = (longueur * largeur);
    
    cout << "L'air du rectangle est de :" << resulat << endl;
}
