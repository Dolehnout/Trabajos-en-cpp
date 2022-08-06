//Escribe la siguiente expresión como expresión en C++

#include <iostream>
using namespace std;
int main ()
{
    cout<<"\nEste programa resuelve la expresión que se digite";

    //Asignar las variables
    float a,b,c,d,e,f, resultado = 0;

    //Pedir valores y lectura de valores
    cout<<"\nDigita el valor de a\n";
    cin>>a;
    cout<<"Digita el valor de b\n";
    cin>>b;
    cout<<"Digita el valor de c\n";
    cin>>c;
    cout<<"Digita el valor de d\n";
    cin>>d;
    cout<<"Digita el valor de e\n";
    cin>>e;
    cout<<"Digita el valor de f\n";
    cin>>f;

    //Asignar la operación
    resultado = (a+b/c) / (d+e/f);
    cout.precision (2); //Este código hace que salgan solo 2 decimales
    cout<<"El resultado final de la operación es: " <<resultado;

    return 0;
}