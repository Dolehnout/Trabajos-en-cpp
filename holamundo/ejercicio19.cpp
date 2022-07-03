#include <iostream>
using namespace std;
int main()
{
    int a = 10;
    int b;

     cout << "Escribe un entero ";

    cin >> b;

    if (b * 10 > a)
    {
        cout << "Muchas felicidades";
    }
    else 
    {
        cout<<endl<<"No felicidades";
    }
    return 0;
}