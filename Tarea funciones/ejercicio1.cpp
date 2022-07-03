#include <iostream>
using namespace std;

/*
1) Una función que recibe como parámetro 2 números enteros, que indican el inicio y fin de una serie.
Se pide calcular la sumatoria de los números comprendidos entre el inicio y f in de la serie.
Nota: El primer entero puede ser mayor o menor que el segundo
Sumatoria (4,9) es lo mismo que sumatoria (9,4) : 4+5+6+7+8+9
*/

void sumaenteros(int a, int b) 
{
  int suma = 0;
  if (a < b) 
  {
    for (int i; a < b + 1; a++) 
    {
      suma = suma + a;
      cout << "\nLa suma es: " << suma;
    }
  } else 
  {
    for (int i; b < a + 1; b++) 
    {
      suma = suma + b;
      cout << "\nLa suma es: " << suma;
    }
  }
}

int main ()
{
  sumaenteros(4,10);
  cout<<endl;
  sumaenteros(1,10);
  cout<<endl;
  sumaenteros(2,7);
  cout<<endl;

  return 0;
}