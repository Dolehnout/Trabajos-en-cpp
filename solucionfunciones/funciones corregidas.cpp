#include <iostream>
using namespace std;

/*
1. Escriba la función que recibe como parámetro 3 números reales de doble precisión y devuelve el promedio de estos números.
*/

double promedio(double n1, double n2, double n3)
{
    return (n1+n2+n3)/3;
}

/*
2. Escriba la función que recibe como parámetro 3 números reales de doble precisión y devuelve el promedio de estos números. 
Además, en un parámetro pasado por referencia devuelve la sumatoria de los mismos.
*/

double promedio(double n1, double n2, double n3, double& suma)
{
    //Suma es un parámetro por referencia
    //n1, n2 y n3 son parámetros por valor
    suma = (n1+n2+n3);
    return suma/3;
}

/*
3. Escriba la función que determina si un número pasado como parámetro es par o impar.
*/
bool parImpar(int num)
    {   
        //retorna true cuando es par, false cuando es impar
        if(num % 2==0)
            return true; //Es par
        else 
            return false; //Es impar

            //Otra manera -- return num % 2;
    }
/*
4. Escriba la función que determina si un número pasado como parámetro es múltiplo de 5
*/

bool multiplo5(int num)
{
    if (num % 5==0)
        return true;
    else
        return false;
}

int main ()
{
    //Ejercicio 1
    cout<<endl<<"Ejercicio 1";
    double p;
    cout<<endl<<"Promedio de 3 números";
    p=promedio(18.5, 20.11, 23.99);

    cout<<endl<<"El promedio es: "<<p;
    cout<<endl;

    /*
    Otra manera de llamar 
    cout<<endl<<"El promedio de 3 número es: ";
    cout<<promedio(10,15,20);
    */

    //Ejercicio 2
    cout<<endl<<"Ejercicio 2";
    double suma;
    p=promedio(22.4, 35, 30, suma);
    cout<<endl<<"La suma de 22.4 + 53 + 30 es: " <<suma;
    cout<<", y el promedio es: "<<p;
    cout<<endl;

    //Ejercicio 3
    cout<<endl<<"Ejercicio 3";
    int n =15;
    if(parImpar (n)==true) //Otra manera-- if(parImpar (n))
    {
        cout<<endl<<n<<", es par";
        cout<<endl;
    }
    else 
    {
        cout<<endl<<n<<", es impar";
        cout<<endl;
    }

    //Ejercicio 4
    cout<<endl<<"Ejercicio 4";
    int m=20;
    if (multiplo5(m)==true)
    {
        cout<<endl<<m<<", es múltiplo de 5";
        cout<<endl;
    }
    else 
    {
        cout<<endl<<m<<", no es múltiplo de 5";
        cout<<endl;
    }

    return 0;
}

