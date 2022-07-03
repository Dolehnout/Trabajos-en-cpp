#include <iostream>

using namespace std;

int main ()
{
    cout<<"\n\nEjemplo de bucle while que imprime la tabla del 10";

    int tabla = 10;
    int i = 1;
    while (i<=10)
    {
        cout<<"\n" << tabla << " x " << i << " = " << (tabla * i);
        i++;
    }
    return 0;
}