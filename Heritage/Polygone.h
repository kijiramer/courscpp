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

protected: //Tous les element qui h�rite de la classes polygone y on acc�s
    int largeur;
    int longueur;


private: // Only for the class

};

#endif
