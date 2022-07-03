#include <iostream>
#include <stdlib.h>
#include <time.h>
using namespace std;

/*
4) Diseñe la función que genere un número aleatorio. La función debe devolver un número aleatorio entre 1 y 6 
(Investigar como se generan números enteros)
*/

void random() 
{
  srand((unsigned)time(0));
  cout << (rand() % 6) + 1 << endl;
}

int main() 
{
  cout<<"El número aleatorio es: "; random();
  return 0;
}
