#include <iostream>
using namespace std;

/*
23. Una función recibe como parámetro un entero que indica la edad de una persona en días. 
La función debe imprimir la edad de la persona en años, meses y días.
*/

void Edad(int edad)
{
    int años; int dias; int meses;
    cout<<endl<<"La edad en años es: "<<edad;
    dias = 365;
    cout<<endl<<"La edad en días es: "<<(edad*365);
    meses = 12;
    cout<<endl<<"La edad en meses es: "<<(edad*12);
}

int main ()
{
    Edad(19);

    return 0;
}