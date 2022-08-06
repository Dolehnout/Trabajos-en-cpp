/*
Escriba un fragmento de programa que intercambie los valores de dos variables
*/

#include <iostream>
using namespace std;

int main ()
{
    int aux; int a; int b;
    cout<<endl<<"Digite el valor de a"<<endl; 
    cin>>a;
    cout<<endl<<"Digite el valor de b"<<endl; 
    cin>>b;

    //Proceso para hacer el intercambio de valores
    aux = a;
    a = b;
    b = aux;

    //Mensaje final
    cout<<endl<<"El nuevo valor de a es: "<<a;
    cout<<endl<<"El nuevo valor de b es: "<<b;

    return 0;
}