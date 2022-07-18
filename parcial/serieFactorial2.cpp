#include <iostream>
using namespace std;

/* 
Serie 02
1/2! - 3/3! + 5/4! - 7/5! + num/n!
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

double serie02(int n)
{
    double k = 1;
    double suma=0;
    bool flag=true;

    for (int i = 2; i<=n; i++)
    {
        if (flag)
            {
                suma = suma + ( k / factorial(i));
            }
        else
            { 
                suma = suma - ( k / factorial(i));
            }
        k+=2;
        flag = !flag;
        //k=k+2;
    }
    return suma;
}

int main ()
{
    cout<<endl<<serie02(7);

    return 0;
}