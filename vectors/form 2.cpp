#include <iostream>
#include<stdlib.h>
#include<time.h>
 
using namespace std;
 
int generaNumAleatorio(int limite)
{
    int num = 1+rand()%(limite); //genera un número aleatorio entre 1 y limite
    return num;
}


 
int main()
{
    const int LIMITE=100;
    srand(time(NULL)); //inicializa el generador de número aleatorios
 
    //declaración del vector
    int notas[LIMITE];
 
    //lectura de los elementos del vector por teclado
    
    cout<<endl<<"Generación de las notas de estudiantes"<<endl;
    for(int k=0; k < LIMITE; k++)
    {
        //cout<<"Ingresa la nota del estudiante # "<<k+1 <<" : ";
        //cin>>notas[k];
        notas[k]=generaNumAleatorio(50);
    }
 
    //impresión de las notas del vector
    cout<<endl<<endl<<"Notas de los estudiantes";
    for(int k=0; k < LIMITE; k++)
    {
        cout<<endl<<"La nota del estudiante #  "<<k+1 << " es : ";
        cout<<notas[k];
    }
 
    //Calcular la sumatoria y el promedio de las notas de los estudiantes
    //luego imprimir los resultados
    int suma=0;
    for(int k=0; k<LIMITE; k++)
    {
        suma=suma+notas[k]; //ACUMULADOR
    }
 
    //encontrar la nota máxima
    int x=notas[0];
    for(int k=1; k<LIMITE; k++)
    {
        if(notas[k] > x)
            x=notas[k];
    }
 
    cout<<endl<<"La sumatoria es: "<<suma;
    cout<<endl<<"El promedio es: "<<(double(suma)/100);
    cout<<endl<<"La notas máxima es: "<< x;
 
    //Tarea:
    /*
    Usando vectores se pide:
    1) Declare un vector de 100 enteros para registrar las notas de 100 estudiantes
    2) Ingrese las notas de estos 100 estudiantes. Alternativa: llene el vector con números aleatorios
    3) Calcular la sumatoria y el promedio
    4) Encontrar la nota máxima
    */    
    return 0;
}