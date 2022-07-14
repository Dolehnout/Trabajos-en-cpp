#include <iostream>
using namespace std;

int suma(int n)
{
    for (int i = 1; i<=7; i++)
        cout<<n<<"+"<<i<<"="<<n+i<<endl;
    return 0;
}

int suma2(int k)
{
    for (int i=7; i>=1;i--)
        cout<<k<<"+"<<i<<"="<<k+i<<endl;
    return 0;
}

void numeros()
{
    for (int i=1; i<=10; i++)
    cout<<i<<endl;
}

int main ()
{
    suma(3);
    numeros();
    suma2(3);

    return 0;
}