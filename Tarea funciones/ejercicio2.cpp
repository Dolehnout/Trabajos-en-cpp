#include <iostream>
using namespace std;

/*
2) Una función recibe 2 parámetros que indican el total de filas y columnas que se deben emplear
para imprimir un rectángulo 
Ejemplo: Rectángulo (2,5)
* * * * *
* * * * *
*/

void rectangulo(int fila, int columna)
{
    for (int i=1; i <= fila; i++)
    {
    for (int c=1; c <= columna; c++)
    {
    cout<< " * ";
    }
    cout<<endl;
    }
}
int main()
{
    cout<<endl<<"Imprimir rectángulo";
    cout<<endl;
    rectangulo(2,5);
    cout<<endl;
    rectangulo(5,2);
    cout<<endl;
    rectangulo(7,4);

    return 0;
}