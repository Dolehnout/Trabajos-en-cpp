#include <iostream>
using namespace std;

int main ()
{
    //Inicializar el vector en la declaración
    int edades[5] = {10,11,45,76,1};
    //Cambio de un elemento del vector
    edades [4]=11; //Reemplaza el 1 por el 11
    //Imprimir todo el vector
    for (int k =0; k<5; k++)
    {
        cout<<endl<<"El elemento de la posición " << k << " es: "<<edades[k];
    }

    return 0;
}