#include <iostream>
using namespace std;

/*
7. Diseñe la función que determina la cantidad de cifras que tiene un número entero - este entero pasa como parámetro. Por ejemplo:

si el número es 12 tiene 2 cifras

si el número es 157 tiene 3 cifras

si el número es 999 tiene 3 cifras

si el número es 15000 tiene 5 cifras. 

si el número es -145 tiene 3 cifras
*/

void cantcifras(int v)
{
    if(v >=10 && v<=99 )
        cout<<endl<<"El número " << v << " tiene 2 cifras";
    else if (v >=100 && v<=999)
        cout<<endl<<"El número " << v << " tiene 3 cifras";
    else if (v >=1000 && v<=9999)
        cout<<endl<<"El número " << v << " tiene 4 cifras";
    else if (v >=10000 && v<=99999)
        cout<<endl<<"El número " << v << " tiene 5 cifras";
    else if (v >=100000 && v<=999999)
        cout<<endl<<"El número " << v << " tiene 6 cifras";
    else 
        cout<<endl<<"El número " << v << " tiene 1 cifras";
}

int main ()
{
    cantcifras(1);
    cantcifras(23);
    cantcifras(500);
    cantcifras(1300);
    cantcifras(50032);
    cantcifras(123981);

    return 0;
}