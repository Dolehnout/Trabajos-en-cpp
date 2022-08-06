/*
Escriba un programa que lea la nota final de cuatro alumnos y calcule la nota final media de 
los cuatro alumnos
*/

#include <iostream>
using namespace std;

int main ()
{
    float google; float manon; float jullien; float gbelly; float promedio;

    cout<<endl<<"Este programa sacará el promedio de notas de cuatro estudiantes";
    cout<<endl<<"Ingrese la nota final de Google"<<endl; cin>>google; 

    cout<<endl<<"Ingrese la nota final de Manon"<<endl; cin>>manon;   

    cout<<endl<<"Ingrese la nota final de Jullien"<<endl; cin>>jullien;   
  
    cout<<endl<<"Ingrese la nota final de Gbelly"<<endl; cin>>gbelly; 


    promedio = (google + manon + jullien + gbelly) / 4;

    cout<<endl<<"El promedio final de los 4 estudiantes es: "<<promedio;

    return 0;
}