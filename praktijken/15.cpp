#include <iostream>
using namespace std;

/*
Escribe un programa que lea 3 números, después de leer el cuarto número
debe indicar si el número coincide con alguno de los introducidos anteriormente
*/
int main ()
{
    int a, b, c, d;
    
    cout<<endl<<"Ingrese cuatro números"<<endl;cin>>a>>b>>c>>d;

    if (d == a)
        {
            cout<<endl<<"El número d: "<<d<< " es igual al número 1: "<<a;
        }
    else if (d == b)
        {
            cout<<endl<<"El número d: "<<d<< " es igual al número 2: "<<b;
        }
    else if (d == c)
        {
            cout<<endl<<"El número d: "<<d<< " es igual al número 3: "<<c;
        }
    else 
        {
            cout<<endl<<"Todos los números son diferentes";
        }
	
    return 0;
}