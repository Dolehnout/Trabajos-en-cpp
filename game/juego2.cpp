#include <iostream>
#include <stdlib.h>
#include <time.h>
using namespace std;

/*
Genere el programa que simula el lanzamiento de 2 dados.
El usuario gana cuando saca pares o cuando saca 7 u 11
*/

int main()
{
    while (true)
    {   
        cout<<endl<<"----------------------------------------";
        cout<<endl<<"-------------Juego de Dados-------------";
        cout<<endl<<"----------------------------------------";
        cout<<endl;
        cout<<endl<<"Escribe cualquier dígito para lanzar los dados";
        cout<<endl;
        string lanzar; cin >> lanzar; 

        srand (time (0));
        int dado1, dado2;
        dado1 = 1+rand() % (5 + 1);
        dado2 = 1+rand() % (6 + 1);

        cout<<endl<<"Dado 1 = "<<dado1;
        cout<<endl<<"Dado 2 = "<<dado2;
        int Total = dado1 + dado2;
        cout<<endl<<"La suma de los dados es: "<<(Total);
        cout<<endl;
        
        if (Total % 2 == 0)
        {
        cout<<endl<<"----------------------------------------";
        cout<<endl<<"----------------Ganaste-----------------";
        cout<<endl<<"----------------------------------------";
        }
        else if(Total == 7 or Total == 11)
        {
        cout<<endl<<"----------------------------------------";
        cout<<endl<<"----------------Ganaste-----------------";
        cout<<endl<<"----------------------------------------";
        }
        else
        { 
        cout<<endl<<"----------------------------------------";
        cout<<endl<<"----------------Perdiste----------------";
        cout<<endl<<"----------------------------------------";
        }
        return 0;
    }   
}