#include <iostream>
using namespace std;

/*
10. Diseñe la función que recibe como parámetro 1 entero positivo que indica una tabla de multiplicar. La función debe imprimir la tabla de multiplicar desde el 12 al 1. Por ejemplo:

5 x 12 = 60

5 x 11 = 55

5 x 10 = 50

...

...

5 x 1 = 5
*/

void multiplicar2(int num)
{
  for (int i = 12; i >= 1; i--)
  {
  cout <<endl<< num << " x " << i << " = " << (num*i);
  }
  
}

int main ()
{
  //Ejercicio 10
  multiplicar2(3);

  return 0;
}