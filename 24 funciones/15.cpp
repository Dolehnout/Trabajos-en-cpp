#include <iostream>
using namespace std;

/*
15. Diseñe la función que calcula el resultado de la siguiente serie:

2! - 3! + 4! - 5! + 6! - N!

N es un parámetro que indica el límite de la serie

Nota: El símbolo ! significa: factorial
*/

double factoriall(int num)
{
    double fac= 1;
    //Ejemplo 5!= 1*2*3*4*5
    for (int k=1; k<=num; k++)
    {
        fac=fac*k;
    }
    return fac;
}

double seriefactorial(int n)
{   
    double suma = 0;
    bool flag=true; 
    for (int k=2; k<=n; k++)
    {
        if (flag==true)
        {
            suma=suma+factoriall(k);
        }
        else 
        {
            suma=suma-factoriall(k);
        }
        flag=!flag;
    }
    return suma;
}


int main ()
{
    cout<<endl<<"El factorial de 5 es: "<<factoriall(5);
    cout<<endl<<"El factorial de 6 es: "<<factoriall(6);
    cout<<endl<<"La suma de la serie de los factoriales cuando n es 6 es: "<<seriefactorial(6);
    cout<<endl<<"La suma de la serie de los factoriales cuando n es 7 es: "<<seriefactorial(7);

    return 0;
}