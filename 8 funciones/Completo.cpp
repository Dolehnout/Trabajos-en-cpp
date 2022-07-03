#include <iostream>
using namespace std;
/* Ejercicio 4 (Principal)
Escriba la función que determina si un número pasado como parámetro es múltiplo de 5
*/

void multiplos(int multiplo)
{   
    cout<<endl<<"Ejercicio 4";
    if (multiplo % 5==0)
        cout<<endl<<multiplo<<" es múltiplo de 5";
    else if (multiplo % 3==0)
        cout<<endl<<multiplo<<" es múltiplo de 3";
    else if (multiplo % 7==0)
        cout<<endl<<multiplo<<" es múltiplo de 7";
    else 
        cout<<endl<<multiplo<<" no es múltiplo de 5, 3 o 7";
    cout<<endl;
}

/*
8. Escriba la función que recibe como parámetro 1 entero positivo e imprime su equivalente en binario.
*/

string binario(int n)
{   
    string bin;
    while (n!= 0)
    {
        bin += (n % 2 == 0 ? "0" : "1" );
        n/= 2;
    }
    return bin;
}

/*
9. Diseñe la función que recibe como parámetro 1 entero positivo que indica una tabla de multiplicar. La función debe imprimir la tabla de multiplicar desde el 1 al 15. Por ejemplo:

5 x 1 = 5

5 x 2 = 10

5 x 3 = 15

...

...

5 x 15 = 75
*/

void multiplicar(int num)
{
    cout<<endl<<"Ejercicio 9";
    for (int i; i <= 15; i++)
    {
        cout <<endl<< num << " x " << i << " = " << (num*i);
    }
    cout<<endl;
}

/*
10. Diseñe la función que recibe como parámetro 1 entero positivo que indica una tabla de multiplicar. La función debe imprimir la tabla de multiplicar desde el 12 al 1. Por ejemplo:

5 x 12 = 60

5 x 11 = 55

5 x 10 = 50

...

...

5 x 1 = 5
*/

void multiplicar2(int num)
{
    cout<<endl<<"Ejercicio 10";
    for (int i = 12; i >= 1; i--)
    {
        cout <<endl<< num << " x " << i << " = " << (num*i);
    }
    cout<<endl;
  
}

/*11. Diseñe la función que recibe como parámetro un entero N comprendido 1 y 10. 
La función debe imprimir las tablas de múltiplicar desde el 1 a N. Por ejemplo, si N=3, se imprimirá:
Tabla del 1
1 x 1 = 1
1 x 2 = 2
...
1 x 10 = 10
Tabla del 2
2 x 1 = 2
2 x 2 = 4
...
2 x 10 = 20
Tabla del 3
3 x 1 = 3
3 x 2 = 3
...
3 x 10 = 30*/

void tablas(int n) 
{ 
    cout<<endl<<"Ejercicio 11";
    if (n >= 1; n <= 10){
    for(int mul=1;mul<=n;mul++)
        for(int i=1;i<=10;i++) {
        cout<<endl<<mul<<" x "<<i<<" = "<<(mul*i); 
    }
  }
    cout<<endl;
}

/*
16. Una función recibe como parámetro un entero que indica las filas de una figura. 
Adicionalmente, recibe como parámetro un string que indica el relleno de la figura a dibujar. 
Por ejemplo, si filas es 4 y el relleno es '+', la figura sería:

+

++

+++

++++
*/
void filas(string filas, int numfilas)
{
    cout<<endl<<"Ejercicio 16";
    cout<<endl;
    for(int i = 1; i <= numfilas; ++i)
    {
        for(int j = 1; j <= i; ++j)
        {
            cout<<filas;
        }
        cout<<endl;
    }
}

/*
17. Figura en espejo: Una función recibe como parámetro un entero que indica las filas de una figura. 
Adicionalmente, recibe como parámetro un string que indica el relleno de la figura a dibujar. 
Por ejemplo, si filas es 4 y el relleno es 'o', la figura sería:
o

oo

ooo

oooo

ooo

oo

o
*/

void filas2(int n)
{
    cout<<endl<<"Ejercicio 17";
    cout<<endl;
    for (int i=0; i<n; i++)
    {
        for(int j=0; j<=i; j++ )
        {
            cout << "o";
        }
        cout<<endl;
    }
    for (int i=n-1; i>0; i--)
    {
        for(int j=0; j<i; j++ )
        {
            cout << "o";
        }
        cout << endl;
    }
}

/* Ejercicio 18
Una función que recibe 3 números enteros. 
La función devuelve verdadero si uno de estos números es la suma de los otros 2
*/

bool numeros(int n1, int n2, int n3)
{
    cout<<endl<<"Ejercicio 18";
    if (n1==n2+n3)
        return true;
    if (n2==n1+n3)
        return true;
    if (n3==n1+n2)
        return true;
    else 
        return false;
}

int main ()
{
    //Ejercicio 4
    multiplos(33);
    cout<<endl;
    multiplos(40);
    cout<<endl;
    multiplos(14);
    cout<<endl;
    multiplos(37);

    //Ejercicio 8
    cout<<endl<<"Ejercicio 8";
    cout<<endl;
    int num = 17;
    cout<<"decimal: "<< num << endl;
    cout<<"binario: "<< binario(num) << endl;

    //Ejercicio 9
    multiplicar(3);

    //Ejercicio 10
    multiplicar2(5);

    //Ejercicio 11
    tablas(3);

    //Ejercicio 16
    filas("+", 5);

    //Ejercicio 17
    cout << "\n";
    int n = 5;
    filas2(n);

    //Ejercicio 18
    bool x = numeros(10,5,5);
    if (x==true)
    cout<<endl<<"Verdadero";
    else
    cout<<endl<<"Falso";

    return 0;
}