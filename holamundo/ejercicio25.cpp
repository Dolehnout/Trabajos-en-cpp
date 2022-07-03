#include <iostream>
using namespace std;
//Identificador de días
int main ()
{
    int a;
    cout << "Escribe cualquier número del 1 al 7 y aparecerá un día de la semana" << endl;
    cin >> a;

    if (a == 1)
    {
	    cout << "Es lunes";
    }
    else if(a==2)
    {
	    cout << "Es martes";
    }
    else if(a==3)
    {
	    cout << "Es miércoles";
    }
    else if(a==4)
    {
        cout << "Es jueves";
    }
    else if (a==5)
    {
        cout << "Es viernes";
    }
    else if(a==6)
    {
	    cout << "Es sábado";
    }
    else if(a==7)
    {
	    cout << "Es domingo";
    }
    else if(a==8)
    {
	    cout << "Google";
    }
    else if(a==9)
    {
	    cout << "Manon";
    }
    else
    {
	    cout << "Debes escribir un número del 1 al 9"; 
    }
    return 0;
}