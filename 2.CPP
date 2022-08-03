#include <iostream>
#include <math.h>
#include <stdlib.h>
#include <time.h>
using namespace std;

void contraseña()
{
    int contrasena,x;
    string nombre,Usario,apellido,g;
    cout<<"Para entrar a esta funcion debes registrarte"<<endl;
    cout<<"Ingrese su nombre: ";
    cin>>nombre;
    cout<<"ingrese su apellido: ";
    cin>>apellido;
    contrasena=1+rand()%(5000);
    g="@tigre.com";
    Usario=apellido+nombre+g;
    cout<<"Tu usuario es: "<<Usario;
    cout<<endl<<"Tu contraseña se genera con numero aleatoria"<<endl;
    cout<<"Tu contraseña es:"<<contrasena;
    cout<<"ingrese la contraseña: ";
    cin>>x;
    while(x != contrasena){
        
    cout<<"Ingrese la contrase correctamente: ";
    cin>>x;
}
int main()
{
    contraseña();

}