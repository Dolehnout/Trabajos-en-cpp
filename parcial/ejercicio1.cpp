#include <iostream>
using namespace std;

/*
Diseñe la función que recibe la nota de un estudiante comprendida entre 1 y 100
Si la nota es mayor o igual que 1 y menor que 60, la función devuelve "F"
Si la nota es mayor o igual que 60 y menor que 70, la función devuelve "D"
Si la nota es mayor o igual que 70 y menor que 80, la función devuelve "C"
Si la nota es mayor o igual que 80 y menor que 90, la función devuelve "B"
Si la nota es mayor o igual que 90 y menor o igual que 100, la función devuelve "A"
En cualquier otro caso devuelve "Nota no válida"
*/

string notaEquivalente (int nota)
{
    string aux;
    if (nota >= 0 && nota <=100 )
    
    {
    if (nota >= 90)
        {
            aux = "A";
        }
    else if (nota >= 80)
        {
            aux = "B";
        }
    else if (nota >= 70)
        {
            aux = "C";
        }
    else if (nota >= 60)
        {
            aux = "D";
        }
    else if (nota >= 1)
        {
            aux = "F";
        }
    }
    else 
        {
            aux = "Nota no válida";
        }

    return aux;
}

int main ()
{
    cout<<endl<<"95 es: "<<notaEquivalente(95);
    cout<<endl<<"90 es: "<<notaEquivalente(90);
    cout<<endl<<"81 es: "<<notaEquivalente(81);
    cout<<endl<<"89 es: "<<notaEquivalente(89);
    cout<<endl<<"55 es: "<<notaEquivalente(55);
    cout<<endl<<"2 es: "<<notaEquivalente(2);
    cout<<endl<<"-10 es: "<<notaEquivalente(-10);
    cout<<endl<<"101 es: "<<notaEquivalente(101);

    return 0;
}