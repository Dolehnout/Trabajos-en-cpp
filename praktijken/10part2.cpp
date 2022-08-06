#include <iostream>
#include <math.h>
using namespace std;


int main ()
{
    float a,b,c, resultado1=0, resultado2=0; 

    cout<<endl<<"Digite el valor de a: "<<endl;cin>>a;
    cout<<endl<<"Digite el valor de b: "<<endl;cin>>b;
    cout<<endl<<"Digite el valor de c: "<<endl;cin>>c;

    resultado1 = (-b+sqrt(pow(b,2)-4*a*c))/(2*a);
    resultado2 = (-b-sqrt(pow(b,2)-4*a*c))/(2*a);

    cout<<endl<<"El resultado es: "<<resultado1;
    cout<<endl<<"El resultado es: "<<resultado2;
    

    return 0;
}