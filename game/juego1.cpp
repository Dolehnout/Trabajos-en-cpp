#include <iostream>
#include <stdlib.h>
#include <time.h>

using namespace std;


int numAleatorio()
{
    int num = 1+rand()%(20);
    return num;

}
void jugar(int oportunidades)
{
    //Mensaje de bienvenida al juego
    cout<<endl<<"----------------------------------------";
    cout<<endl<<"----------------------------------------";
    cout<<endl<<"-----Adivina un número entre 1 y 20-----";
    cout<<endl<<"----------------------------------------";
    cout<<endl<<"----------------------------------------";
    
    //Para ingresar un número
    int num1; bool ganaste=false;
    int num2=numAleatorio();
    //cout<<endl<<"Número aleatorio generado: "<<num2; //Para mostrar el número generado antes de pedir el número

    int j=0; //Para poner las oportunidades
    while (j<oportunidades && ganaste==false) //También se puede colocar !ganaste
    {
    j++;
    cout<<endl<<endl<<"Oportunidad #: "<<j;
    cout<<endl<<"Ingresa un número entre 1 y 20"<<endl; //Pedir al usuario que ingrese un núméro
    cin>>num1; 

    //Colocar condición
    if(num1==num2)
    {
        ganaste=true;
    }
    else if (num1<num2)
    {
        cout<<endl<<"----------------------------------------";
        cout<<endl<<"---------Coloca un número mayor---------";
        cout<<endl<<"----------------------------------------";
        cout<<endl;
    }
    else 
    {
        cout<<endl<<"----------------------------------------";
        cout<<endl<<"---------Coloca un número menor---------";
        cout<<endl<<"----------------------------------------";
        cout<<endl;
    }

} //Fin de while

    //Este mensaje aparece si se adivina el número en primera o segunda vez
    if (ganaste==true)
    {
        cout<<endl<<"----------------------------------------";
        cout<<endl<<"----------Adivinaste el número----------";
        cout<<endl<<"----------------------------------------";
        cout<<endl;
    }
    else 
    {
        cout<<endl<<"----------------------------------------";
        cout<<endl<<"--------Has perdido los intentos--------";
        cout<<endl<<"----------------------------------------"; 
        cout<<endl;
    }

    //Tarea:
    /*
    Pedir al usuario si desea volver a jugar. Si el usuario ingresa 1, vuelve a jugar. 
    Si el usuario ingresa 0, el juego termina
    */
    string nuevointento('0', '1');
    if (ganaste==false)
    {
        cout<<endl<<"¿Deseas jugar de nuevo?"; 
        cout<<endl;
        cout<<endl<<"Escribe 1 para volver a jugar"; 
        cout<<endl<<"Escribe 0 para abandonar el juego";
        cout<<endl;
        cin>>nuevointento;
    }
    else if (ganaste)
    {
	    cout<<endl<<"¿Deseas jugar de nuevo?";
        cout<<endl;
        cout<<endl<<"Escribe 1 para volver a jugar"; 
        cout<<endl<<"Escribe 0 para abandonar el juego";
        cout<<endl;
        cin>> nuevointento;
    }
    if (nuevointento == "1")
    {
        return jugar(2);
    }
    else
    {
        cout<<endl<<"Gracias por jugar, ¡vuelve pronto!";
    }
} 

int main()

{
    srand(time(NULL)); //Inicia el generador de números aleatorios
    jugar(5); //Llamar a la función jugar

    return 0;
}
