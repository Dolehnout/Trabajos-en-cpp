#include <iostream>
using namespace std; 

/*
Diseñe la función que recibe la nota de un estudiante comprendida entre 1 y 100.
Si la nota es mayor o igual que 1 y menor que 60, la función devuelve "F"
Si la nota es mayor o igual que 60 y menor que 70, la función devuelve "D"
Si la nota es mayor o igual que 70 y menor que 80, la función devuelve "C"
Si la nota es mayor o igual que 80 y menor que 90, la función devuelve "B"
Si la nota es mayor o igual que 90 y menor o igual que 100, la función devuelve "A"
En cualquier otro caso devuelve "NOTA NO VALIDA"
*/

string notas(int j)
{
    string aux;
    if (j>=1 && j<60)
    aux = "F";
    else if (j>=60 && j<70)
    aux = "D";
    else if (j>=70 && j<80)
    aux = "C";
    else if (j>=80 && j<90)
    aux = "B";
    else if (j>= 90 && j<=100)
    aux = "A";
    else 
    aux = "Número fuera de rango";

    return aux;
}

int main ()
{
    cout<<endl<<"La nota es: "<<notas(5);
    cout<<endl<<"La nota es: "<<notas(63);
    cout<<endl<<"La nota es: "<<notas(75);
    cout<<endl<<"La nota es: "<<notas(86);
    cout<<endl<<"La nota es: "<<notas(92);
    cout<<endl<<"La nota es: "<<notas(328);

    return 0;
}