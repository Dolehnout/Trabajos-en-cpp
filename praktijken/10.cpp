/*
Realice un programa que calcule el valor que toma la siguiente función para unos valore s
dados de X e Y:
*/

#include <iostream>
#include <math.h>
using namespace std;


int main ()
{
    float x,y,resultado=0;
    cout<<endl<<"Digite el valor de x: "<<endl;cin>>x;
    cout<<endl<<"Digite el valor de y: "<<endl;cin>>y;

    resultado = (sqrt(x))/(pow(y,2)-1);

    cout<<endl<<"El resultado es: "<<resultado;
    cout<<endl; 

    return 0;
}