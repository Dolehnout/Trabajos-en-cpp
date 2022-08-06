#include <iostream>
using namespace std;

/*
Escriba un programa que lea por teclado una letra e indique
en la salida si la letra es una vocal minúscula, vocal mayúscula
o no es una vocal
*/
int main ()
{
    char a;
    cout<<endl<<"Digite una vocal y se verificará si es minúscula, mayúscula o no es una vocal"<<endl;
    cin>>a;

    switch(a)
        {
            case 'a': 
            case 'e':
            case 'i':
            case 'o':
            case 'u': cout<<endl<<"Es una vocal minúscula"; 
            break;

            case 'A':
            case 'E':
            case 'I':
            case 'O':
            case 'U': cout<<endl<<"Es una vocal mayúscula"; 
            break;


            default: cout<<endl<<"No es una vocal";
        }
	
    return 0;
}