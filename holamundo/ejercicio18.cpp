#include <iostream>
using namespace std;
int main()
{
    int a = 10;
    int b;
     cout << "A = 10" <<endl; 
     cout << "Escribe un entero " <<endl; 
     cin >> b; //Entrada por teclado
     
    if (a==b)
    {
        cout << "El número es igual que 10" << endl;
    }
    else
    {
        cout << "No es igual que 10";
    }
    return 0;
}