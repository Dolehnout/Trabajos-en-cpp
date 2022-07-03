#include <iostream> 
using namespace std;
int main ()

{

    cout <<"\n\nEjemplo Tabla del 7 desde el 12 a 1";

    int tabla = 7;
    for (int k=12; k>=1; k--)
        {
            cout <<"\n" << tabla << " x " << k << "= " << (tabla * k);
        }
    return 0;
}