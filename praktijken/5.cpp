/*Realizar un programa que lea en la entrada los siguientes datos de una persona

    Edad: dato de tipo entero
    Género: dato de tipo carácter
    Altura en metros: dato de tipo real.
    Nombre: dato de tipo carácter
    Tipo de sangre: dato de tipo carácter
    Nacionalidad: dato de tipo carácter
Tras leer los datos, el programa debe mostrarlos en la salida*/

#include <iostream>
using namespace std;
int main ()
{
    
    cout<<"\nEste programa lee la edad, sexo y altura de una persona";

    //Asignar variables

    int Edad;
    char Genero [10];
    float Altura;
    char Nombre [20];
    char Sangre [20];
    char Nacionalidad [20];

    //Pedir datos y lectura de datos

    cout<<"\nIngresa tu edad\n";
    cin>>Edad;
    cout<<"Ingrea tu género\n";
    cin>>Genero;
    cout<<"Ingresa tu altura\n";
    cin>>Altura;
    cout<<"Ingresa tu Nombre\n";
    cin>>Nombre;
    cout<<"Ingresa tu Sangre\n";
    cin>>Sangre;
    cout<<"Ingresa tu Nacionalidad\n";
    cin>>Nacionalidad;
    
    //Mostrar en pantalla
    cout<<"\nTu nombre es: " <<Nombre;
    cout<<"\nTu género es: " <<Genero;
    cout<<"\nTu edad es: " <<Edad;
    cout<<"\nTu altura es: " <<Altura;
    cout<<"\nTu nacionalidad es: " <<Nacionalidad;
    cout<<"\nTu sangre es: " <<Sangre;

    return 0;
}