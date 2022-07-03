#include <iostream> 
using namespace std;
int main ()
{
    cout<<endl<<"Ejemplo de bucle do while";
    int cont= 10;
    int tabla = 5;

    do {
        cout<<endl<<tabla << " x " << cont << " = " << (tabla*cont);
        cont --;
    }while(cont>=1);

    return 0;
}