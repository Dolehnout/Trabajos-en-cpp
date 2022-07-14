#include <iostream>
using namespace std;

void bucle(int k=1)
{
    while (k<=10)
    {
    cout<<k<<"." << " Google & Manon"<<endl;
    
    k++;
    }
}

void bucle2(int v=3)
{   
    int n=4;
    while(v<=10)
    {
    cout<<n<<"*"<<v<<"="<<n*v<<endl;
    v++;
    }
}

int main ()
{
    bucle();
    bucle2();

    return 0;
}