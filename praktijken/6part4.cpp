/*
Escriba un programa que lea de la entrada estándar los dos catetos de un triángulo
rectángulo y escriba en la salida su hipotenusa
*/

#include <iostream>
#include <math.h>
using namespace std;
int main ()

{
    float a; float b; float c; float raiz;

    cout<<endl<<"Ingrese el valor de cateto a"<<endl; cin>>a;
    cout<<endl<<"Ingrese el valor de cateto b"<<endl; cin>>b;

    c = (a*a) + (b*b);
    raiz = sqrt(c);

    cout<<endl<<"La hipotenusa es: "<<raiz;
    
    return 0;
}