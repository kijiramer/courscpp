#pragma once
class polygone
{
public:
	polygone();//constructeur
	polygone(int _largeur, int _longueur);
	~polygone();//destructeur

// virtuelle pure = pas de d�finition
// obligation de red�finir dans les enfants
	virtual float area() = 0;
	virtual float perimeter() = 0;

	void decrire();

	static int nombreDePolyActuel;

protected:
	int longueur;
	int largeur;
private:
};

