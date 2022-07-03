#include <iostream>
using namespace std;

int main()
{
    int a=30; 
    int b=20;
    int c=10;

    if ( a>b && b>c)
    {
	    cout << "Bienvenidos";
		a = a * b;
		b++;
	} 
    else 
    {
        cout << "No eres bienvenido";
    }
  return 0;
} 