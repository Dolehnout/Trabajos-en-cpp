#include <iostream>

using namespace std;

//Leer por teclado las edades de 8 estudiantes.
//Encontrar la edad promedio, la edad mínima y la edad máxima.
//Se pide usar funciones.

//Función que realiza por teclado la lectura de las edades de los 8 estudiantes.

void cinEdades(int edad[], int total)
{
    cout<<endl<<"Ingresa la edad de 8 estudiantes"<<endl;
    for (int k = 0; k < total; k++)
        {
            cout<<endl<<"Ingresa la edad del estudiante #" <<k+1<<endl;
            cin>>edad[k];
        }
}

void printEdades(int edad[], int total)
{
    cout<<endl<<"Listado de edades de los estudiantes"<<endl;
    for (int k = 0; k < total; k++)
    {
        cout<<endl<<"La edad del estudiante " <<k+1<< " es: " <<edad[k]<<endl;
    }
}

int getEdadMin(int edad[], int total)
{
    int x = edad[0];
    for (int k = 0; k < total; k++)
    {
        if (edad[k] < x)
            {
               x = edad[k]; 
            }
    }
    cout<<endl<<"La edad mínima es: "<<x;
    return x;
}

int getEdadMax(int edad[], int total)
{
    int y = edad[0];
    for (int j = 0;j < total; j++)
    {
        if (edad[j] > y)
            {
               y = edad[j]; 
            }
    }
    cout<<endl<<"La edad máxima es: "<<y;
    return y;
}

int suma_promedio(int edad[], int total)
{
    int i = 0;
    for (int k = 0; k < total; k++)
        {
            i = i + edad[k];
        }
    cout<<endl<<"La suma de todas las edad es es: "<<i;
    cout<<endl<<"Y el promedio de las edades es: "<<(float(i)/8);
    return i;
}

int main ()
{
    const int TOTAL = 8;
    int edades[TOTAL]; //Declaración del vector de edades

    //Llamar las funciones
    cinEdades(edades, TOTAL);
    printEdades(edades, TOTAL);
    getEdadMin(edades, TOTAL);
    getEdadMax(edades, TOTAL);
    suma_promedio(edades, TOTAL);

    return 0;
}