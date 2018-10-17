#include "Polygone.h"
#include <iostream>

Polygone::Polygone()
{
    largeur = 2;
    longueur = 3;

    cout << "constructeur polygone" << endl;
}

Polygone::Polygone(int _largeur, int _longueur)
{
    largeur = _largeur;
    longueur = _longueur;

    cout << "constructeur polygone int int" << endl;
}

Polygone::~Polygone()
{

}

void Polygone::decrire()
{
    cout << largeur << ";" << longueur << endl;
}
