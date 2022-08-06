#include <iostream>
#include <math.h>
using namespace std;

/*
Hacerr un programa que simule un cajero automático con un 
saldo inicial de 1000 dólares
*/
int main ()
{
    
	int cubo; int a; int elegir; int resultado;

    cout<<endl<<"Matemáticas"<<endl; 
    cout<<endl<<"1. Cubo de un número";
    cout<<endl<<"2. Par o impar"; 
    cout<<endl<<"3. Salir";
    cout<<endl<<"Elige: "<<endl;
     
    cin>>elegir;

    switch(elegir)
        {
            case 1: 
            {
                cout<<endl<<"Digite el número que quier elevar al cubo"<<endl;
                cin>>cubo;
                resultado = pow(cubo, 3);
                cout<<endl<<"El número: "<<cubo<< " al cubo es: "<<resultado;
                break;
            }

            case 2:
            {
                cout<<endl<<"Digite un número para saber si es par o impar "<<endl;
                cin>>a;
                if (a%2==0)
                    {
                        cout<<endl<<"El número es par"<<endl;
                    }
                else 
                {
                    cout<<endl<<"El número es impar";
                }
            }
            case 3:
            break;
        }
    return 0;
}