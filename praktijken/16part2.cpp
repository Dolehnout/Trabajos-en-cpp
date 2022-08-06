#include <iostream>
using namespace std;

/*
Mostrar los meses del año, pidiéndole al usuario un número entre (1-12),
y mostrar el mes al que corresponde.
*/
int main ()
{
    
	int mes; cout<<endl<<"Ingresa un número del 1 al 12 y se mostrará el mes"; cin>>mes;
    
    switch(mes)
        {
            case 1: cout<<endl<<"Es ennero"; break;
            case 2: cout<<endl<<"Es febrerp"; break;
            case 3: cout<<endl<<"Es marzo"; break;
            case 4: cout<<endl<<"Es abril"; break;
            case 5: cout<<endl<<"Es mayo"; break;
            case 6: cout<<endl<<"Es junio"; break;
            case 7: cout<<endl<<"Es julio"; break;
            case 8: cout<<endl<<"Es agosto"; break;
            case 9: cout<<endl<<"Es septiembre"; break;
            case 10: cout<<endl<<"Es octubre"; break;
            case 11: cout<<endl<<"Es noviembre"; break;
            case 12: cout<<endl<<"Es diciembre"; break;

        }
    return 0;
}