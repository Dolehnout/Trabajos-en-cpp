#include <iostream>
using namespace std;


int main ()
{
    //Declaración de un vector de entero
    int x [5];
    //Inicialización del vector de manera manual 
    x[0]=10;
    x[1]=20;
    x[2]=13;
    x[3]=15;
    x[4]=70;

    //Imprime ciertos elementos del vector
    cout<<endl<<"Elemento de la posición 0: "<<x[0];
    cout<<endl<<"Elemento de la posición 1: "<<x[1];
    cout<<endl<<"Elemento de la posición 2: "<<x[2];
    cout<<endl<<"Elemento de la posición 3: "<<x[3];
    cout<<endl<<"Elemento de la posición 4: "<<x[4];

    //Imprime todo el vector 
    cout<<endl;
    cout<<endl<<"Imprimir todos el vector:";
    for (int k=0; k<5; k++)
    {
        cout<<endl<<x[k]; //Para que salga en la misma línea [cout<<" "<<x[k];]
    }

    return 0;
}