#include <iostream>
using namespace std;

int main () 
{
    int a = 10;
    int b = 20;

    if (!(a < b))
    {
    cout << "Bienvenido" << endl;
    a = a * b;
    b++;
    }
    else 
    {
    cout << "No eres bienvenido";    
    }

  return 0;
} 