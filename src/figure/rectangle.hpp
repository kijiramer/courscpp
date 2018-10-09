//
//  rectangle.hpp
//  
//
//  Created by Mehdi AKOUNAD on 04/10/2018.
//

#ifndef rectangle_hpp
#define rectangle_hpp

#include <stdio.h>
#include "figure.hpp"


class rectangle {
public:
    
    float longueur;
    float largeur;
    
    void perimetre(float longueur, float largeur);
    void air(float longueur, float largeur);
    
};

#endif /* rectangle_hpp */
