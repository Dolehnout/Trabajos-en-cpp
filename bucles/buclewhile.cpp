#include <iostream> 
using namespace std;
int main ()
{

    cout<<endl<<"Ejemplo del bucle while";
    int i=0;
    while (i < 15)

    { 
        i++;
        cout<<endl<<"Mensaje #" << i;
        cout<<endl<< "El cuadrado de i: " <<(i*i);
        
    }

    return 0;
}