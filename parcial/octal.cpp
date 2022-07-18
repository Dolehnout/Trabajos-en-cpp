#include <iostream>
using namespace std;
/*
Una función que recibe como parámetro un entero.
La función debe imprimir un entero en su equivalente octal
*/

string octal (int num)
{
    string aux = "";
    while (num>0)
    {
        int res;
        res=num%8;
        num=num/8;

        aux = to_string(res)+aux;
    }
    return aux;
}

int main ()
{
    cout<<octal(500);

    return 0;
}