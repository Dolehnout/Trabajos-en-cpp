/*Escribe un programa que lea la entrada estándar dos números y muestre
en la salida estándar su suma, resta, multiplicación y división.*/
#include <iostream>
using namespace std;
int main ()
{
    cout<<"Este programa te ayudará a resolver operaciones básicas de matemáticas" <<endl;

    //Asignar las variables

    int numero1,numero2, suma = 0, resta = 0, multiplicacion = 0, division = 0;
    cout<<endl<<"Digita un número: \n"; //Pedir número
    cin>>numero1; //Lectura de número
    cout<<endl<<"Digita otro número: \n"; //Pedir número
    cin>>numero2; //Lectura de número

    //Asignar las operaciones
    suma = numero1 + numero2;
    resta = numero1 - numero2;
    multiplicacion = numero1 * numero2;
    division = numero1 / numero2;

    //Dar los resultados en pantalla
    cout<<"\nLa suma de los números digitados es " <<suma;
    cout<<"\nLa resta de los números digitados es " <<resta;
    cout<<"\nLa multiplicación de los números digitados es " <<multiplicacion;
    cout<<"\nLa división de los números digitados es " <<division;
    
    return 0;
}