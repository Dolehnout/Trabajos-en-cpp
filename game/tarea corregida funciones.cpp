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
int suma (int linf, int lsup)
{
    int mayor=lsup;
    int menor=linf;
    int resultado = 0;

    if (linf > lsup)
        mayor=linf;

    if (lsup<linf)
        menor=lsup;
    
    for (int i=menor; i<=mayor; i++)
        resultado+=i;

    return resultado;
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

double factorial(int num)
{
    double fac=1.0;
    for(int i=1; i<=num;i++)
        fac=fac*i;
    return fac;
}

/*
4) Diseñe la función que genere un número aleatorio. La función debe devolver un número aleatorio entre 1 y 6 
(Investigar como se generan números enteros)
*/

int random()
{
    int num = 1+rand()%(6);
    return num;

}

int main ()
{
    //Ejercicio 1
    cout<<endl<<"La sumatoria de 4 a 9 es: " <<suma(4,9);
    cout<<endl<<"La sumatoria de 4 a 9 es: " <<suma(9,4);

    //Ejercicio 2
    cout<<endl<<"Ejercicio 2: Imprimir rectángulo"<<endl;
    cout<<endl;
    rectangulo(2,5);
    cout<<endl;
    rectangulo(5,2);
    cout<<endl;
     rectangulo(7,4);
    

    //Ejercicio 3
    double suma=0;
    for (int k=3; k<=15; k++)
        suma+=factorial(k);
    cout<<endl<<"La sumatoria de los factoriales de 3 a 15 es: "<<suma;

    //Ejercicio 4
    srand(time(NULL));
    cout<<endl<<endl<<"Número aleatorio: "<<random();
    cout<<endl<<"Número aleatorio: "<<random();
    cout<<endl<<"Número aleatorio: "<<random();
    cout<<endl<<"Número aleatorio: "<<random();


    return 0; 
}