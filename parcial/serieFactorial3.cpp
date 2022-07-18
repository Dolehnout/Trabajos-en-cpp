#include <iostream>
using namespace std;

double factorial(int num)
{
    double fac=1;
    for(int i = 1; i<=num; i++)
        {
            fac*=i;
        }
    return fac;
}

int potencias(int num)
{
    int resultado=1;
    for (int k =1; k<=num; k++)
    resultado = resultado * num;
    return resultado;
}

double serie03(int num)
{


}

int main ()
{
    cout<<factorial(5);
    cout<<endl<<potencias(2);

    return 0;
}