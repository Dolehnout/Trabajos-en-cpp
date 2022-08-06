#include <iostream>
using namespace std;

/*
Escriba un porgrama que lea tres números y determine cual
de los tres es el mayor
*/
int main ()
{
    int a; int b; int c;
    cout<<endl<<"Digite 3 números"<<endl;
    cin>>a>>b>>c;

   	if((a>b)&&(a>c))
        {
		    cout<<"El mayor es: "<<a;
	    }
	else if((b>a)&&(b>c))
        {
		    cout<<"El mayor es: "<<b;
	    }
	else
        {
		    cout<<"El mayor es: "<<c;
	    }
	
    return 0;
}