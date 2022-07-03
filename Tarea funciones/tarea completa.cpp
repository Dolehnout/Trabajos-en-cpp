#include <iostream>
#include <stdlib.h>
#include <time.h>
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

/*
2) Una función recibe 2 parámetros que indican el total de filas y columnas que se deben emplear
para imprimir un rectángulo 
Ejemplo: Rectángulo (2,5)
* * * * *
* * * * *
*/

void rectangulo(int fila, int columna)
{
    for (int i=1; i <= fila; i++)
    {
    for (int c=1; c <= columna; c++)
    {
    cout<< " * ";
    }
    cout<<endl;
    }
}

/*
3) Usando la función factorial creada en clase, se pide que desde el main se imprima la 
sumatoria de los factoriales desde el 3 al 15
*/

double factorial(int f1, int f2) 
{
  double fact = 1;
  if (f1 >= 3 && f1 <= 15) 
  {
    for (int i = 1; i <= f1; i++) 
    {
      for (int k = 1; k < f2; k++)
        fact = fact * k; 
    }
  } else
    fact = -1;

  return fact;
}

/*
4) Diseñe la función que genere un número aleatorio. La función debe devolver un número aleatorio entre 1 y 6 
(Investigar como se generan números enteros)
*/

void random() 
{
  srand((unsigned)time(0));
  cout << (rand() % 6) + 1 << endl;
}

int main(int argc, char *argv[])
{
  //Ejercicio 1
  cout<<endl<<"Ejercicio 1: Imprimir la suma entre el rango de 2 enteros"<<endl;
  sumaenteros(4,10);
  cout<<endl;
  sumaenteros(1,10);
  cout<<endl;
  sumaenteros(2,7);
  cout<<endl;

  //Ejercicio 2
  cout<<endl<<"Ejercicio 2: Imprimir rectángulo"<<endl;
  cout<<endl;
  rectangulo(2,5);
  cout<<endl;
  rectangulo(5,2);
  cout<<endl;
  rectangulo(7,4);

  //Ejercicio 3
  cout<<endl<<"Ejercicio 3: Sumar factoriales de 3 hasta 15";
  cout<<endl<<"La suma de los factoriales de 3 hasta 15 es:"<<endl;
  cout<<factorial(3, 15)<<endl;
    
  //Ejercicio 4
  cout<<endl<<"Ejercicio 4: Generar número aleatorio"<<endl;
  cout<<"El número aleatorio es: "; random();

  return 0;
}