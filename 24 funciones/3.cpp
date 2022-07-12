#include <iostream>
using namespace std;

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

int main ()
{
    cout<<endl<<"Ejercicio 3";
    int ll =15;
    if(parImpar (ll)==true) //Otra manera-- if(parImpar (n))
    {
        cout<<endl<<ll<<", es par";
        cout<<endl;
    }
    else 
    {
        cout<<endl<<ll<<", es impar";
        cout<<endl;
    }

    return 0;
}