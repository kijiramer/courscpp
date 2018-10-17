#ifndef TRIANGLE_H  //If not difiend (S'il n'est existe) alors crée...
#define TRIANGLE_H

#include "Polygone.h"

class Triangle : public Polygone
{
public:
    Triangle();
    Triangle(int _largeur, int _longueur);
    ~Triangle();

    void decrire();

private:
};

#endif             //Close If, Le point H
