#include <iostream>
using namespace std;

void notas()
{
    //Declaración del vector
    int notas [10];
    int mayor = 0;

    //Lectura de los elementos del vector
    for (int k=0; k<10; k++)
        {
            cout<<endl<<"Ingrese la nota del estudiante #" <<k+1<< ": "; 
            cout<<endl;
            cin>>notas[k];

             if (notas[k] > mayor)
            {
            mayor = notas[k];
            }
        }
    //Impresión de las notas del vector 
    cout<<endl;
    cout<<endl<<"Notas de los estudiantes";
    for (int k=0; k<10; k++)
        {
            cout<<endl<<"La nota del estudiante #" <<k+1<< " es: " <<notas[k];
        }

    /*
    Calcular la sumatoria y el promedio de las notas de los estudiantes
    luego, imprimir los resultados
    */
   int suma = 0;
   for (int k = 0; k<10; k++)
   {
   suma = suma + notas[k]; //Acumulador
   }
   cout<<endl<<"La sumatoria de las notas es: "<<suma;
   cout<<endl<<"El promedio de las notas es: "<<(suma/10.0); //Otra forma (double(suma)/10)
   cout<<endl<<"La mayor nota es: "<<mayor;

}

int main ()
{
    notas();

    return 0;
}