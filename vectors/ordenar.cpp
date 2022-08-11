#include <iostream>
#include<stdlib.h>
#include<time.h>
 
using namespace std;
 
//Se tienen un vector de 50 números enteros
//Se pide buscar si el número cualquiera existe o no en el vector (devolver true o false).
//Debe utilizar funciones, y el vector se debe llenar de manera aleatoria
 
//Tarea: Diseñe una función adicional que busca un elemento del vector y duvuelve la
//cantidad de veces que existe
 
int generaNumAleatorio(int limite)
{
    int num = 1+rand()%(limite); //genera un número aleatorio entre 1 y limite
    return num;
}
 
void llenarVector(int vector[], int TOTAL)
{
    for(int k=0; k < TOTAL; k++)
    {
        vector[k]=generaNumAleatorio(100);
    }
}
 
void imprimirVector(int vector[], int TOTAL)
{
    cout<<endl<<"Elementos del vector: " <<endl;
    for(int k=0; k < TOTAL; k++)
    {
        cout<<vector[k] << "  ";
    }
}

void ordenar (int vector[], int TOTAL) //Para ordenar los elementos del vector
{
    for (int j=0; j<TOTAL; j++)
        {
            for (int k = j+1; k<TOTAL; k++)
                {
                    if (vector[j]>vector[k])
                        {
                            int aux=vector[j];
                            vector[j]=vector[k];
                            vector[k]=aux;
                        }
                }
        }
}

int main ()
{   
    srand(time(NULL));  
    const int TOTAL=100000; int vector[TOTAL];
    cout<<endl<<"Iniciando";

    llenarVector(vector, TOTAL);
    cout<<endl<<"Vector original";
    imprimirVector(vector, TOTAL);

    ordenar(vector, TOTAL);
    cout<<endl<<"Vector ordenado";
    imprimirVector(vector, TOTAL);
    cout<<endl<<"Finalizado";

    return 0;
} 