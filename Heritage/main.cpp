#include <iostream>

#include "Triangle.h"
#include "Rectangle.h"

using namespace std;

int main()
{
    Polygone poly(10,15);
    poly.decrire();
    cout<<endl;

    Triangle tri(12,13);
    tri.decrire();
    cout<<endl;


    Rectangle rect(18, 20);
    rect.decrire();
    cout<<endl;

    return 0;
}
