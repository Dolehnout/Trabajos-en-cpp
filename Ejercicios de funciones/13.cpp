#include <iostream>
using namespace std;

int sumatorias(int nnn)
{
    int suma = 0;
    bool flag = true;
    for(int i=1; i<=nnn; i++)
        {
            if (flag==true)
                suma = suma + i; //Abreviación && suma += i;
            else
                suma = suma - i; //Abreviación && suma-= i;

        flag = !flag;
        }
        return suma;
}

int main ()
{
    int resultados= sumatorias(8);
    cout<<endl<<"La sumatoria de la serie cuando N es 8 es: ";
    cout<<resultados;

    return 0;
}