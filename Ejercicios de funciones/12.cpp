#include <iostream>
#include <math.h>
using namespace std;

/*
12. Diseñe la función que calcula la ecuación cuadrática, usando las fórmulas siguientes:

x1 = (-b+ raizCuadrada(b*b - 4*a*c))/(2*a)

x2 = (-b- raizCuadrada(b*b - 4*a*c))/(2*a)

Los valores a,b,c pasan como parámetros de la función.

x1 - x2 son parámetros por referencia que devuelven los resultados de la ecuación.

La función devuelve 1 si es una ecuación válida, y 0 si la ecuación no es válida.

*/

int funcionCuadrada(double a, double b, double c, double &x1, double &x2)
{
    if (a==0) //Error división para 0
        return -1;

    double D;
    D=(b*b)-(4*a*c);

    if (D<0) //Error de raiz cuadrada, discriminante negativo
        return 0;

    x1=(-b+sqrt(D))/(2*a);
    x2=(-b-sqrt(D))/(2*a);

    return 1;
}

int main ()
{
    double x1, x2;
    int respuesta = funcionCuadrada(1,6.6,4, x1, x2);

    if (respuesta==1)
        {
            cout<<endl<<"La solución para X1 es: "<<x1;
            cout<<endl<<"La solución para X2 es: "<<x2;
        }
    else if (respuesta==-1)
        {
            cout<<endl<<"Error al dividir para 0";
        }
    else if (respuesta==0)
        {
            cout<<endl<<"La discriminate es negativo (Soluciones imaginarias)";
        }

    return 0;
}