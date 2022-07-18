#include <iostream>
#include <math.h>
using namespace std;

/*
Área del triángulo conociendo los 3 lados
A=raizq(x(x-a)(x-b)(x-c))
x= (a+b+c)/2

Nota: La función debe devolver verdadero si es viable calcular la fórmula, o falso si no lo es.
El resultado  R se debe devolver utilizando parámetros por referencia
*/

double areaTriangulo(double a, double b, double c, double &Res)
{
    double x=(a+b+c)/2;
    double d=x*(x-a)*(x-b)*(x-c); 
    if (d<0)
    {
        return false;
    }
    else 
    {
        Res= sqrt(d);
        return true;
    }
}

int main ()
{
    double res=0;
    if (areaTriangulo(10,12,15, res))
        cout<<endl<<"El área del triángulo con a=10, b=12, c=15 es:  "<<res;
    else 
        cout<<endl<<"No se le puede sacar raiz cuadrada a un número negativo";

    return 0;
}