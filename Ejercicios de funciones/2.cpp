#include <iostream>
using namespace std;


/*
2. Escriba la función que recibe como parámetro 3 números reales de doble precisión y devuelve el promedio de estos números. 
Además, en un parámetro pasado por referencia devuelve la sumatoria de los mismos.
*/

double promedio(double n1, double n2, double n3, double suma)
{
    //Suma es un parámetro por referencia
    //n1, n2 y n3 son parámetros por valor
    suma = (n1+n2+n3);
    return suma/3;
}

int main ()
{
    cout<<endl<<"Ejercicio 2";
    double suma;
    double p;
    p=promedio(22.4, 35, 30, suma);
    cout<<endl<<"La suma de 22.4 + 53 + 30 es: " <<suma;
    cout<<", y el promedio es: "<<p;
    cout<<endl;

    return 0;

}