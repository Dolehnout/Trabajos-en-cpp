#include <iostream>
using namespace std;

int main()
{
    int a = 10;
    int b;
    cout << "Escribe un número " <<endl;
    cin >> b;

    if (a < b)
    {
        cout << "Bienvenidos " <<endl;
        a = a * b;
        b++;
    }
    else 
    {
        cout << "No eres bienvenido " <<endl;
        b = b - a;
        b++;
    }
    return 0;
}