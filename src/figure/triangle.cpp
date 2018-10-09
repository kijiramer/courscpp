//
//  triangle.cpp
//  
//
//  Created by Mehdi AKOUNAD on 04/10/2018.
//

#include "triangle.hpp"
#include <iostream>

using namespace std;

void triangle::perimetre(float a, float b, float base){
    
    float resultat = a + b + base;
    
    cout << "Le perimetre du triangle est de " << resultat << endl;
};

void triangle::air(float hauteur, float base){
    
    float resultat = base * hauteur;
    
    cout << "L'air du triangle est de " << resultat << endl;
};
