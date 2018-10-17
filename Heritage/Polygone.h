#ifndef POLYGONE_H
#define POLYGONE_H
#include <iostream>

using namespace std;

class Polygone
{
public: // Tout monde ok
    Polygone();
    Polygone(int _largeur, int _longueur);
    ~Polygone();

    void decrire();

protected: //Tous les element qui hérite de la classes polygone y on accés
    int largeur;
    int longueur;


private: // Only for the class

};

#endif
