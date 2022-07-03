#include <iostream>

using namespace std;

int main ()
{
    int edad; 
    cout<<"Ingresa tu edad";
    cin>>edad;
    cout<<"Tu edad es : " <<edad;


    if (edad >= 18)
    {
        cout<<endl<<"Ya puedes votar";
    }
    else 
    {
        cout<<endl<<"Eres menor de edad";
    }

    return 0;

}