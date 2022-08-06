//Escribe la siguiente expresión como expresión en C++

#include <iostream>
using namespace std;
int main ()

{
    cout<<"\nEste programa resuelve la expresión que se digite";

    //Asignar las variables
    float a,b, resultado = 0;

    //Pedir valores y lectura de valores
    cout<<"\nDigita el valor de a\n";
    cin>>a;
    cout<<"Digita el valor de b\n";
    cin>>b;

    //Asignar la operación
    resultado = (a/b) + 1;
    cout.precision(2); //Este código hace que salgan solo 2 decimales
    cout<<"\nEl resultado es: " <<resultado;


    return 0;
}