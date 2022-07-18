#include <iostream>
using namespace std;

/*
Tarea
Diseñe la función que calcule el resultado de la siguiente serie
2!/5 + 3!/5^2 + 4!/5^3 + 5!/5^4 + N!/5^5 
*/

double factorial(int num)
{
    double fac=1;
    for(int i = 1; i<=num; i++)
        {
            fac*=i;
        }
    return fac;
}

int potencias(int base, int exponente)
{
    int resultado=1;
    for (int k =1; k<=exponente; k++)
        {
            resultado = resultado * base;
        }
    return resultado;
}

double serie03(int n)
{   
    double suma = 0;

    for (int k =2; k<=n; k++)
        {
            suma = suma + (factorial (k) / potencias(5, k-1));
        }
        return suma;
}


int main ()
{
    cout<<endl<<"La suma de la serie cuando n es 6 es: "<<serie03(6);

    return 0;
}