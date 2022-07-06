#include <iostream>
using namespace std;

/*
13. Diseñe la función que devuelve el resultado de la siguiente serie:

1 - 2 + 3 - 4 + 5 - 6 + 7 - N

N es un parámetro que indica el límite de la serie
*/

void sumaresta(int pp)
{
    int sr=1;
     for (int i=1; i<=pp; i++)
      if (i%2 ==0)
          {
            sr+=i;
          }            
       else
          {
            sr-=i;
          }
    cout << "El resultado es de la secuencia de " <<pp<< " es: " <<sr<< endl;
}

int main ()
{
    sumaresta(5);


    return 0;
}