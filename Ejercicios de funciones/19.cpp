#include <iostream>
using namespace std;

/*
19. Una función recibe como parámetro un entero. 
La función debe imprimir este entero en su equivalente en hexadecimal(base 16).
*/

void hexadecimal(int num)
{
    //Bucle: repetir proceso

    while (num > 0)
    {
        int res = num % 16;
        num = num / 16;
        if (res==10)
            cout<<"A";
        else if (res==11)
            cout<<"B";
        else if (res==12)
            cout<<"C";
        else if (res==13)
            cout<<"D";
        else if (res==14)
            cout<<"E";
        else if (res==15)
            cout<<"F";
        else
            cout<<res;
    }
}

int main ()
{
    hexadecimal(1256);
    
    return 0;
}