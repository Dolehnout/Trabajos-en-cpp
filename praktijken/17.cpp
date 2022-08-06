#include <iostream>
using namespace std;

/*
Hacerr un programa que simule un cajero automático con un 
saldo inicial de 1000 dólares
*/
int main ()
{
    
	int caja = 1000; int elegir; float extra; float saldo = 0; float retiro;

    cout<<endl<<"Cajero automático"<<endl; 
    cout<<endl<<"1. Ingresar dinero en cuenta"<<endl;
    cout<<endl<<"2. Retirar dinero en cuenta"<<endl; 
    cout<<endl<<"3. Salir"<<endl;
    cout<<endl<<"Elige: "<<endl;
     
    cin>>elegir;

    switch(elegir)
        {
            case 1: 
            {
                cout<<endl<<"Digite la cantidad de dinero a ingresar"<<endl;
                cin>>extra;
                saldo = caja + extra;
                cout<<endl<<"Dinero total: "<<saldo;
                break;
            }

            case 2:
            {
                cout<<endl<<"Digite la cantidad de dinero que desee retirar"<<endl;
                cin>>retiro;
                if (retiro > caja)
                    {
                        cout<<endl<<"No tiene esa cantidad de dinero"<<endl;
                    }
                else 
                {
                    saldo = caja - retiro;
                    cout<<endl<<"Dinero en cuenta: "<<saldo;
                }
            }
            case 3:
            break;
        }
    
    
    return 0;
}