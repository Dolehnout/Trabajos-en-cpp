#include <iostream>
using namespace std;

void notas()
{
    //Declaración del vector
    int notas [10];

    //Lectura de los elementos del vector
    for (int k=0; k<10; k++)
        {
            cout<<endl<<"Ingrese la nota del estudiante #" <<k+1<< ": "; 
            cout<<endl;
            cin>>notas[k];
        }
    //Impresión de las notas del vector 
    cout<<endl;
    cout<<endl<<"Notas de los estudiantes";
    for (int k=0; k<10; k++)
        {
            cout<<endl<<"La nota del estudiante #" <<k+1<< " es: " <<notas[k];
        }
}

int main ()
{
    notas();

    return 0;
}