#include <iostream> 
using namespace std;
int main ()

{

    cout <<"\n\nEjemplo Tabla del 3 con incrementos de 2 en 2";

    int tabla = 7;
    tabla = 3; 
    for (int k=1; k<=30; k+=2)
        {
            cout <<"\n" << tabla << " x " << k << "= " << (tabla * k);
        }
    return 0;
}