#include <iostream>
using namespace std;

/*
14. Diseñe la función que calcula el resultado de la siguiente serie:

2^1 + 3^2 + 4^3 + 5^4 + ... N^(N-1)

N es un parámetro que indica el límite de la serie

Nota: El simbolo ^ significa: elevado a
*/

int potencia(int base, int exponente)
{
    int resultado=1;
    for (int k=1; k<=exponente; k++)
        resultado=resultado*base;
        return resultado;
}

//Función para realizar la suma de potencias
int seriePotencia(int n)
{
    int suma=0;
    for(int j=2; j<=n; j++)
        suma=suma+potencia(j,j-1);

    return suma;
}

int main ()
{
    cout<<endl<<"2 elevado a la 5 potencia es: "<<potencia(2,5);

    //Suma de potencia
    cout<<endl<<"El resultado de la serie cuando n es 8 es: ";
    cout<<seriePotencia(8);

    return 0;
}