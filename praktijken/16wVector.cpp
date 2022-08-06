#include <iostream>
using namespace std;

/*
Mostrar los meses del año, pidiéndole al usuario un número entre (1-12),
y mostrar el mes al que corresponde.
*/
int main ()
{
    
	int mes[12];
    cout<<endl<<"Ingresa un número entre 1 y 12 y aparecerá un mes del año";

    
    for (int k = 0; k<12; k++)
        {   
            cout<<endl;
            cin>>mes[k];
            
            if (mes[k]==1)
                {
                    cout<<"Es enero";
                }
            else if (mes[k]==2)
                {
                    cout<<"Es febrero";
                }
            else if (mes[k]==3)
                {
                    cout<<"Es marzo";
                }
            else if (mes[k]==4)
                {
                    cout<<"Es abril";
                }
            else if (mes[k]==5)
                {
                    cout<<"Es mayo";
                }
            else if (mes[k]==6)
                {
                    cout<<"Es junio";
                } 

            else if (mes[k]==7)
                {
                    cout<<"Es julio";
                } 
            else if (mes[k]==8)
                {
                    cout<<"Es agosto";
                } 
            else if (mes[k]==9)
                {
                    cout<<"Es septiembre";
                } 
            else if (mes[k]==10)
                {
                    cout<<"Es octubre";
                } 
            else if (mes[k]==11)
                {
                    cout<<"Es noviembre";
                } 
            else if (mes[k]==12)
                {
                    cout<<"Es diciembre";
                } 
            else 
                {
                    cout<<"Número fuera de rango";
                }
        }
    return 0;
}