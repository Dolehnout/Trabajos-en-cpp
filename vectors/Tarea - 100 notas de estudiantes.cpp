#include <iostream>
#include <stdio.h>
#include <stdlib.h>
#include <time.h>
using namespace std;

/*
Tarea:
Usando vectores se pide:
1) Declare un vector de 100 enteros para registrar las notas de 100 estudiantes
2) Ingrese las notas de estos 100 estudiantes. Alternativa: llene el vector con números aleatorios
3) Calcular la sumatoria y el promedio 
4) Encontrar la nota máxima 
*/
int random() //Funciónp ara generar número aleatorio
{
    int num =1+rand()%(300); //Genera un número aleatorio entre 1 y 20
    return num;
}

void cienNotas()
{   
    //1)
    int notas[100];
    int mayor = 0;
    cout<<endl<<"Generar 100 notas";
    cout<<endl;
    //2)
    for (int k = 0; k < 100; k++)
    {
        notas[k] = random();
        cout<<endl<<"La nota #"<<k+1<< " es: " <<notas[k];

        //4)
        if (notas[k] > mayor)
        {
        mayor = notas[k];
        }
    }

    int suma = 0;
    for (int k = 0; k < 100; k++)
    {
        suma = suma + notas[k];
    }

    //3)
    cout<<endl;
    cout<<endl<<"La sumatoria de las notas es: "<<suma;
    cout<<endl<<"El promedio de las notas es: "<<(double(suma)/100);
    cout<<endl<<"El número mayor es: "<<mayor;

}

int main ()
{
    cienNotas();

    return 0;
}