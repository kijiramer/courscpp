//
//  main.cpp
//  
//
//  Created by Mehdi AKOUNAD on 04/10/2018.
//

#include "main.hpp"
#include <iostream>
#include <stdlib.h>
#include "triangle.hpp"
#include "rectangle.hpp"

using namespace std;

int main(){
    int choix, choix2,a,b,c;
    
    do {
    
    	cout << "-------------------MENU---------------------" << endl;
   	 cout << "Que voulez vous étudier?" << endl;
    	cout << "1 - Rectangle " << endl;
    	cout << "2 - Triangle" << endl;
    	cout << "--------------------------------------------" << endl;
    	cout << " 3 - Quitter!" << endl;
    
    	cin >> choix;
    
    	switch (choix)
    	{
        	case (1):
        	{
    			rectangle rectangle1;
    
            		system ("clear");
            		cout << "-------------------MENU---------------------" << endl;
            		cout << "Que voulez vous calculer?" << endl;
            		cout << "1 - Le perimetre" << endl;
            		cout << "2 - L'aire" << endl;
            		cout << "--------------------------------------------" << endl;
            		cout << "3 - Quitter" << endl;
            		cin >> choix2;
    
    			if (choix2==1)
    			{
                        	system("clear");
                        	cout << "Quel est la largeur ?" << endl;
                       	 	cin >> a;
                        	cout << "Quel est la longueur ?" << endl;
                        	cin >> b;

        			rectangle1.perimetre(a,b);
    			}


    			else if (choix2==2)
    			{
                        	system("clear");
                        	cout << "Quel est la largeur ?" << endl;
                        	cin >> a;
                        	cout << "Quele est la longueur ?" << endl;
                        	cin >> b;
        			printf("%d %d\n",a,b);
        			rectangle1.air(a,b);
    			}
    
            
    			break;
		}


        	case (2):
        	{
    			triangle triangle1;
                	system ("clear");
                	cout << "-------------------MENU---------------------" << endl;
                	cout << "Que voulez vous calculer?" << endl;
                	cout << "1 - Le perimetre" << endl;
                	cout << "2 - L'aire" << endl;
                	cout << "--------------------------------------------" << endl;
                	cout << "3 - Quitter" << endl;
                	cin >> choix2;
        
        		if (choix2==1)
        		{
                        	system("clear");
                        	cout << "Quel est la largeur ?" << endl;
                        	cin >> a;
                        	cout << "Quel est la longueur ?" << endl;
                        	cin >> b;
                        	cout << "Quel est la longueur de l'hypothenuse ?" << endl;
                        	cin >> c;
            
            			triangle1.perimetre(a,b,c);
        		}



        		else if (choix2==2)
        		{
                        	system("clear");
                        	cout << "Quel est la taille de la hauteur ?" << endl;
                        	cin >> a;
                        	cout << "Quel est la taille de l'hypothenuse ?" << endl;
                        	cin >> b;
            
            			triangle1.air(a,b);
        		}
 
        	
    			break;
		}
		
	}
        
    } while (choix!=3);

    return 0;
}


/* main.cpp:54:18: error: cannot use dot operator on a type
rectangle.perimetre(a,b);
^
main.cpp:64:18: error: cannot use dot operator on a type
rectangle.air(a,b):
^
main.cpp:74:9: error: 'case' statement not in switch statement
case (2):
^
*/

// le main.cpp pas encore compiler, résoudre les soucis au dessus. 4h04 jeudi 4 octobre //
