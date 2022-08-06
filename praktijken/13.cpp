#include <iostream>
using namespace std;

/*
Escriba un porgrama que lea tres números y determine cual
de los tres es el mayor
*/
int main ()
{
    int a;

    cout<<endl<<"Ingrese un número"<<endl;
    cin>>a;

    if (a<0)
        {
            cout<<endl<<"Este número es negativo";
        }
    else 
        {
            cout<<endl<<"Este número es positivo";
        }
	
    return 0;
}