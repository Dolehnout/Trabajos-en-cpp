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
        vector[k]=generaNumAleatorio(50);
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
 
//búsqueda secuencial
bool busquedav1(int vector[], int TOTAL, int n)
{
    for (int k = 0; k<TOTAL; k++)
        {
            if (vector[k] == n)
                return true;
        }
    return false;
}
 
//búsqueda secuencial
bool busquedav2(int vector[], int TOTAL, int num)
{
    int k=0;
    bool encontrado = false;

    //Evalúa la ejecución del bucle usando el operador &&
    //Si una condición falla, la ejecución dle bucle termina 
    while ((k < TOTAL) && (encontrado == false))
        {
            if (vector[k] == num)
                    encontrado =true;
                    k++;
                
        }
    return encontrado; 
}
 
int main()
{
    const int TOTAL = 50;
    srand(time(NULL)); //inicializa el generador de número aleatorios  
    
    int vector[TOTAL];
    llenarVector(vector, TOTAL);
    imprimirVector(vector, TOTAL);

    int buscar=22;
    if (busquedav2(vector, TOTAL, buscar))
        {
            cout<<endl<<"El número "<<buscar<<" si está en el vector";
        }
    else 
        {
            cout<<endl<<"El número "<<buscar<< " no existe en el vector";
        }
 
   
   return 0;
}