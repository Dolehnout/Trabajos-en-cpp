#include <iostream>
using namespace std;

//Uso de SWITCH
int main ()
{
    int numero;
    cout<<endl<<"Digite un número entre 1 y 5: "<<endl;cin>>numero;

    switch(numero) //Siempre se colocará la variable dentro del paréntesis
    {
        case 1: cout<<endl<<"Es el número 1"; //Los números son la igualdad
        break;
        case 2: cout<<endl<<"Es el número 2";
        break;
        case 3: cout<<endl<<"Es el número 3";
        break;
        case 4: cout<<endl<<"Es el número 4";
        break;
        case 5: cout<<endl<<"Es el número 5";
        break;
        
        default: cout<<endl<<"No está en el rango de 1 y 5"; //Un tipo de else
    }


    return 0;
}