#include <iostream>
using namespace std;

//función que retorna el cuadrado de un entero
int cuadrado (int num)
{
    /*
    int x = num * num *;
    return x; 
    */
    return (num * num);
}
    int main ()
{
    //Cuadrado de varios números
    cout<<endl<<"Ejercicios con funciones\n";
    cout<<endl<<"Función que devuelve el cuadrado de un número\n";
    cout<<endl<<"El cuadrado de 10 es: "<<cuadrado(10);
    cout<<endl<<"El cuadrado de 12 es: "<<cuadrado(12);
    cout<<endl<<"El cuadrado de 15 es: "<<cuadrado(15);
    cout<<endl<<"El cuadrado de 18 es: "<<cuadrado(18);
    cout<<endl<<"El cuadrado de 20 es: "<<cuadrado(20);
    cout<<endl<<"El cuadrado de 22 es: "<<cuadrado(22);
    cout<<endl<<"El cuadrado de 25 es: "<<cuadrado(25);
    cout<<endl<<"El cuadrado de 30 es: "<<cuadrado(30);
    cout<<endl<<"El cuadrado de 45 es: "<<cuadrado(45);
    cout<<endl<<"El cuadrado de 3 es: "<<cuadrado(3);
    cout<<endl<<"El cuadrado de 13 es: "<<cuadrado(13);
    cout<<endl<<"El cuadrado de 5 es: "<<cuadrado(5);

    //Cuadrado de 20 + 2
    int n = cuadrado (20);
    n+=2;
    cout<<endl<<"El valor de n: "<<n;

    //Pedir al usuario un valor para calcular el cuadrado
    int numero;
    cout<<endl<<"Ingresa un número para calcular el cuadrado de tal número\n";
    cin>>numero;
    cout<<endl<<"El cuadrado de " << numero << " es: " <<cuadrado(numero);
    
    return 0;
}