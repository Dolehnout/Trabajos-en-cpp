#include <iostream>
#include <stdlib.h>
#include <time.h>
#include <conio.h>

using namespace std;

int generaNumAleatorio() //Funciónp ara generar número aleatorio
{
    int num =1+rand()%(6); //Genera un número aleatorio entre 1 y 6
    return num;
}

void ImprimirDado(int num) //Función para imprimir los dados 
{   if (num==1)
        cout<<endl<<"✥";
    else if (num==2)
        cout<<endl<<"✥  ✥";
    else if (num==3)
    {
        cout<<"✥  "<<endl;
        cout<<"  ✥"<<endl;
        cout<<"    ✥";
    }
    else if (num==4)
    {
        cout<<"✥  ✥"<<endl;
        cout<<"✥  ✥"<<endl;
    }
    else if (num==5)
    {
        cout<<"✥    ✥"<<endl;
        cout<<"  ✣ "<<endl;
        cout<<"✥    ✥"<<endl;
    }
    else if (num==6)
    {
        cout<<"✥  ✥"<<endl;
        cout<<"✥  ✥"<<endl;
        cout<<"✥  ✥"<<endl;
    }
}

void ganador(int dado1, int dado2)  //Función que anuncia un ganador
{
    if (dado1==dado2)
        cout<<endl<<"Felicitaciones, sacaste caras iguales";
    else if ( (dado1+dado2)==7 || (dado1+dado2)==11)
        cout<<endl<<"Felicitaciones, eres ganador";
    else
        cout<<endl<<"Has perdido";
}

int main ()
{
    srand(time(NULL)); //Inicia el generador de nú8mero aleatorio
    cout<<endl<<endl<<"Pulsa la tecla <ENTER> para lanzar los dados";
    cout<<endl;
    getch(); //Captura la pulsación de una tecla

    int dado1 = generaNumAleatorio();
    int dado2 = generaNumAleatorio();

    cout<<endl<<"Dado 1 = "<<dado1<<endl;
    cout<<endl;
    ImprimirDado(dado1);cout<<endl;
    cout<<endl<<"Dado 2 = "<<dado2<<endl;
    cout<<endl;
    ImprimirDado(dado2);cout<<endl;

    ganador(dado1, dado2);

    return 0;
}