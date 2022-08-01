#include <iostream>
#include <stdlib.h>
#include <time.h>

using namespace std;

//Se tiene un vector de 50 números enteros
//Se pide buscar si le número cualquiera existe o no en el vector (devolver true o false).
//Debe utilizar funciones, y el vector se debe llenar de manera aleatoria

int random() //Función para generar número aleatorio
{
    return (rand()%100) + 1;
}

void cincuentaNUM(int vec[], int total)
{
    cout<<endl<<"Cien números aleatorios"<<endl;
    for (int k = 0; k<total; k++)
        {
            vec[k] = random();
            cout<<endl<<"#" <<k+1<< " = "<<vec[k];
        }
}

bool buscar(int vec[], int total, int n)
{
    for (int k=0; k<total; k++)
        {
            if (vec[k] == n)
                return true;
        }
}

int main ()
{
    srand(time(NULL));
    const int TOTAL = 50;
    int numeros[TOTAL];

    cincuentaNUM(numeros, TOTAL);
    

    return 0;
}