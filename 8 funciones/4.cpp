#include <iostream>
using namespace std;

/* Ejercicio 4 (Principal)
Escriba la función que determina si un número pasado como parámetro es múltiplo de 5
*/

void multiplos(int multiplo)
{
    if (multiplo % 5==0)
        cout<<endl<<multiplo<<" es múltiplo de 5";
    else if (multiplo % 3==0)
        cout<<endl<<multiplo<<" es múltiplo de 3";
    else if (multiplo % 7==0)
        cout<<endl<<multiplo<<" es múltiplo de 7";
    else 
        cout<<endl<<multiplo<<" no es múltiplo de 5, 3 o 7";
}

int main ()
{
    //Ejercicio 4
    multiplos(33);
    cout<<endl;
    multiplos(40);
    cout<<endl;
    multiplos(14);
    cout<<endl;
    multiplos(37);

    return 0;
}