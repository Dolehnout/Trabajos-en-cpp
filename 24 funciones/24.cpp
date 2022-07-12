#include <iostream>
using namespace std;

/*
24. Diseñe la función que recibe como parámetro 2 enteros y los devuelve intercambiados.
Por ejemplo si num1=45 y num2=50, luego de llamar a la función num1 sería igual a 50 y num2 igual a 45.
*/

void intercambio (int &n1, int &n2)
{
    int aux=n1;
    n1=n2;
    n2=aux;

} 


int main ()
{
    int n1=30; int n2=20;
    intercambio(n1,n2);

    int a=72; int b=26;
    intercambio(a,b);

    //Para llamar
    cout<<endl<<"N1 es = "<<n1<<", N2 es = "<<n2;
    cout<<endl<<"A es = "<<a<<", B es = "<<b;

    return 0;
}