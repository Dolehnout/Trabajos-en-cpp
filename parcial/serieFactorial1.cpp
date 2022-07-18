#include <iostream>
using namespace std;

/*
Diseñe la función que hace la siguiente serie
10/2! + 11/3! + 12/4! + ..... + num/n!
*/

double factorial(int num)
{
    double fac=1;
    for(int i = 1; i<=num; i++)
        {
            fac*=i;
        }
    return fac;
}

/*
10/2! + 11/3! + 12/4! + ..... + num/n!
*/
double serie01(int num)
{
    double suma=0;
    int k = 2;
    for (int i = 10; i<=num; i++)
        {
            suma = suma + (i / factorial(k));
            k++;
        }
        return suma;
}

int main ()
{
    cout<<endl<<"El resultado de la serie 01 cuando NUM = 15 es: "<<serie01(15);
    return 0;
}