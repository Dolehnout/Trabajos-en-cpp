#include <iostream>
using namespace std;

/*
6. Una función recibe 2 enteros como parámetros, el primero es el número base, mientras que el segundo indica el exponente al que se va elevar el número base.
Por ejemplo, si el primer número es 2 y el segúndo número es 5, el proceso a realizar sería 2 x 2 x 2 x 2 x 2 = 32 
(en otras palabras 2 elevado a la quinta potencia).
*/

int potencia (int base, int exponente)
{
    int resultado = 1;
    for (int j=1; j<=exponente; j++)
    resultado=resultado*base;
    return resultado;
}

int main ()
{
    cout<<endl<<"5 elevado a la 10 es: "<<potencia(5,10);
    return 0;
}