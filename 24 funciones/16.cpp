#include <iostream>
using namespace std;

/*
16. Una función recibe como parámetro un entero que indica las filas de una figura. 
Adicionalmente, recibe como parámetro un string que indica el relleno de la figura a dibujar. 
Por ejemplo, si filas es 4 y el relleno es '+', la figura sería:

+

++

+++

++++
*/

void filas(string filas, int numfilas)
{
   for(int i = 1; i <= numfilas; ++i)
    {
        for(int j = 1; j <= i; ++j)
        {
            cout <<filas;
        }
        cout <<endl;
    }
}

int main ()
{

    filas("+", 7);

    return 0;
}