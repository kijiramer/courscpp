//
//  main.cpp
//  
//
//  Created by Mehdi AKOUNAD on 17/10/2018.
//

#include <iostream>
#include <vector>
#include <algorithm>


using namespace std;


int main()
{
    vector<int> nombre;
   
    int reel;
    int note;
    int a;
    
    do{
        
    cout << " === Gestion liste de nombre:" << endl;
    cout << " 1. Ajouter un réel" << endl;
    cout << " 2. Afficher la liste des réels" << endl;
    cout << " 3. Supprimer le premier réel de votre choix" << endl;
    cout << " 4. Supprimer tous les réels de votre choix" << endl;
    cout << " 5. Quitter" << endl;
    cin >> a;
    
    
        switch (a){
    
            case 1:
            {
                system("clear");
                
                int i=0;
                int val;
                
                cout << "Entrez le nombre à ajouter à votre liste :" << endl;
                cin >> val;
                nombre.push_back (i);
                nombre[i] = val;
                i++;
                break;
            /* Ajoute un nombre entier à la liste mais parfois l'ajoute comme etant "0." et parfois en tant que le nombre saisie (Provenance du probéleme? Non trouvé) */
            }
    
            case 2:
            {
                system("clear");
                
                for (int i=0; i<nombre.size(); i++)
                {
                    for (int j=0; j<i; j++)
                    {
                        if (nombre[i] < nombre[j])
                        {
                            int rot;
                            rot = nombre[i];
                            nombre[i] = nombre[j];
                            nombre[j]= rot;
                        }
                    }
                }
                
                for(int pr=0; pr < nombre.size(); pr++)
                {
                    cout << nombre[pr] << ", ";
                }
                cout << endl;
                break;
            }
        
            case 3:
            {
                int supp;
                cout << "Quel réel voulez vous supprimer?" << endl;
                cin >> supp;
                
                for (int i=0;i<nombre.size(); i++)
                {
                    if (supp == nombre[i])
                        nombre.erase (nombre.begin() +i);
                }
            break;
            }
            case 4:
            {
                int sup;
                cout << "Quel sont les réel voulez vous supprimer?" << endl;
                cin >> sup;
                
                for (int i=0;i<nombre.size(); i++)
                {
                    if (sup == nombre[i])
                        nombre.erase (nombre.begin() +i);
                }
            }
        }
    } while( a!=5 );
    
    return 0;
}
