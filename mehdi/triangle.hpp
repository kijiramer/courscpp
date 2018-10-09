//
//  triangle.hpp
//  
//
//  Created by Mehdi AKOUNAD on 04/10/2018.
//

#ifndef triangle_hpp
#define triangle_hpp

#include <stdio.h>
#include "figure.hpp"
#include <iostream>

class triangle {
   
public:
    
    float a;        // coté 1
    float b;        // coté 2
    float base;     // coté 3 (le plus grand)
    float hauteur;  // pour l'air
 
    
    void perimetre(float a, float b, float base);
    void air(float hauteur, float base);
};

#endif /* triangle_hpp */
