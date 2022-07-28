#include <iostream>
using namespace std;

void ciudades()
{
    string ciudades[7] = {"esmeraldas", "cuenca", "ambato", "amberes", "olso", "stalingrado", "leipzig"};
    cout<<endl<<"Listado de ciudades";
    for (int k = 0; k<7; k++)
        {
            cout<<endl<<ciudades[k];
        }
}

int main ()
{
    ciudades();

    return 0;
}