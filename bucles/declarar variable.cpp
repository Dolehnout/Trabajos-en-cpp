#include <iostream>

using namespace std;

int main ()
{
     float n1 = 3.14159122;
    double n2 = 14.67910018;

    cout<<endl<<"Variable float x 2 : " << (n1*2);
    cout<<endl<<"Cuadrado de la variable double : " << (n2*n2);

    //Declaración de una variable
    char c=65;
    cout<<endl<<"El valor de la variable char c es: " <<c;
    char d='A';
    cout<<endl<<"El valor de la variable char c es: " <<d;

    //Declaración de variables booleanas (lógicas)
    bool flag=true; 
    cout<<endl<<"El valor de la variable flag " <<flag;
    cout<<endl<<"El valor de la variable flag negada: " <<!flag;

    //Variable tipo cadena de caracteres
    string ciudad="Esmeraldas";
    string nombre;
    cout<<endl<<"Ingresa tu nombre";
    cin>>nombre;
    cout<<"Bienvenido/a "<<nombre<< ", a mi ciudad llamada " << ciudad;
    fflush(stdin);
    
    //Lectura de cadenas de caracteres con getline
    string pais;
    cout<<endl<<"¿En qué país vives?";
    getline(cin,pais);

    cout<<endl<<"Tú vives en " <<pais;
    return 0;

}