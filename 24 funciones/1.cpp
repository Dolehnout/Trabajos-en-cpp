#include <iostream>
using namespace std;

/*
1. Escriba la función que recibe como parámetro 3 números reales de doble precisión y devuelve el promedio de estos números.
*/

double promedio(double n1, double n2, double n3)
{
    return (n1+n2+n3)/3;
}

 /*
    Otra manera de llamar 
    cout<<endl<<"El promedio de 3 número es: ";
    cout<<promedio(10,15,20);
*/

int main ()
{
    cout<<endl<<"Ejercicio 1";
    double p;
    cout<<endl<<"Promedio de 3 números";
    p=promedio(18.5, 20.11, 23.99);

    cout<<endl<<"El promedio es: "<<p;
    cout<<endl;

    return 0;
}