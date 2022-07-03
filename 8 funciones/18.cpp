#include <iostream>
using namespace std;

/* Ejercicio 18
Una función que recibe 3 números enteros. 
La función devuelve verdadero si uno de estos números es la suma de los otros 2
*/

bool numeros(int n1, int n2, int n3)
{
    if (n1==n2+n3)
        return true;
    if (n2==n1+n3)
        return true;
    if (n3==n1+n2)
        return true;
    else 
        return false;
}

int main ()
{
    bool x = numeros(10,5,4);
    if (x==true)
    cout<<endl<<"Verdadero";
    else
    cout<<endl<<"Falso";
}
