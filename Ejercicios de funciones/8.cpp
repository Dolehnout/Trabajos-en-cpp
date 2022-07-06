#include <iostream>
using namespace std;

/*
8. Escriba la función que recibe como parámetro 1 entero positivo e imprime su equivalente en binario.
*/

string binario(int n)
{   
    string bin;
    while (n!= 0)
    {
        bin += (n % 2 == 0 ? "0" : "1" );
        n/= 2;
    }
    return bin;
}

int main() 
{
    int num = 17;

    cout<<"decimal: "<< num << endl;
    cout<<"binario: "<< binario(num) << endl;

    return 0;
}