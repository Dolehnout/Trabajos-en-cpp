#include <iostream>
using namespace std;

/*
5. Escriba la función que recibe como parámetro 1 entero y devuelve el cubo del mismo.
*/

int Cubo(int cubo3)
{   
    cout<<"El cubo de " << cubo3 << " es: ";

    return cubo3*cubo3*cubo3;
}


int main ()
{
    cout<<endl<<Cubo(64);
    cout<<endl<<Cubo(2);
    cout<<endl<<Cubo(5);

    return 0;
}