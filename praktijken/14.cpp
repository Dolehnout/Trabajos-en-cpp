#include <iostream>
using namespace std;

/*
Escriba un programa que lea por teclado una letra e indique
en la salida si la letra es una vocal minúscula o no
*/
int main ()
{
    char a;
    cout<<endl<<"Digite una letra y se verificará si es mayúscula o no"<<endl;
    cin>>a;

    switch(a)
        {
            case 'a': 
            case 'e':
            case 'i':
            case 'o':
            case 'u': cout<<endl<<"Es una vocal minúscula"; 
            break;

            default: cout<<endl<<"No es vocal minúscula";
        }
	
    return 0;
}