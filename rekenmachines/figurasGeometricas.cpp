#include <iostream>
using namespace std;

void triangulo()
{
    int elegir;
    cout<<endl<<"Elige la opción que desees utiliar"<<endl;
    cout<<endl<<"1. Sacar el perímetro del triángulo"<<endl<<"2. Sacar el área del triángulo"<<endl;
    cin>>elegir;
    switch (elegir)
    {
        case 1:
            {
                float lado1, lado2, lado3, perimetro;
                cout<<endl<<"Ingrese el lado de los triángulos para calcular el perímetro"<<endl;
                cin>>lado1>>lado2>>lado3;

                perimetro = lado1+lado2+lado3;

                cout<<endl<<"El perímetro del triángulo es: "<<perimetro;
                break;
            }
        case 2:
            {
                float base, altura, area;
                cout<<endl<<"Ingrese la base del triángulo"<<endl;cin>>base;
                cout<<endl<<"Ingrese la altura del triángulo"<<endl;cin>>altura;

                area = (base * altura) / 2;

                cout<<endl<<"El área del triángulo es: "<<area;
                break;
            }
    }
}

void pentagono()
{
    int elegir;
    cout<<endl<<"Elige la opción que desees utiliar"<<endl;
    cout<<endl<<"1. Sacar el perímetro del pentágono"<<endl<<"2. Sacar el área del pentágono"<<endl;
    cin>>elegir;
    switch (elegir)
    {
        float perimetro;
        case 1:
            {
                float lado;
                cout<<endl<<"Ingrese el lado del pentágono para calcular el perímetro"<<endl;
                cin>>lado;

                perimetro = 5*lado;

                cout<<endl<<"El perímetro del pentágono es: "<<perimetro;
                break;
            }
        case 2:
            {
                float apotema, area;
                cout<<endl<<"Ingrese el apotema del pentágono"<<endl;cin>>apotema;
                cout<<endl<<"Ingrese el perímetro del pentágono"<<endl;cin>>perimetro;
                area = (perimetro*apotema)/2;

                cout<<endl<<"El área del pentágono es: "<<area;
            }
    }
}

void heptagono()
{
    int elegir;
    cout<<endl<<"Elige la opción que desees utiliar"<<endl;
    cout<<endl<<"1. Sacar el perímetro del heptágono"<<endl<<"2. Sacar el área del heptágono"<<endl;
    cin>>elegir;
    float perimetro, lado;
    if (elegir == 1)
        {
            cout<<endl<<"Ingresa el lado del heptágono"<<endl;cin>>lado;
            perimetro = 7*lado;

            cout<<endl<<"El perímetro del heptágono es: "<<perimetro;
        }
    else if (elegir == 2)
        {
            float area, apotema;
            cout<<endl<<"Ingrese el apotema del heptágono"<<endl;cin>>apotema;
            cout<<endl<<"Ingrese el lado del heptágono"<<endl;cin>>lado;

            area = (7*lado*apotema)/2;

            cout<<endl<<"El área del heptágono es: "<<area;
        }
}

int main ()
{
    //triangulo();
    //pentagono();
    //heptagono();

    int elegir;
    cout<<endl<<"Elige qué operación deseas usar"<<endl<<"1. Triángulo"<<endl<<"2. Pentágono"<<endl<<"3. Heptágono"<<endl;
    cin>>elegir;
    if (elegir == 1)
    {
        triangulo();
    }

    else if (elegir == 2)
    {
        pentagono();
    }

    else if (elegir == 3)
    {
        heptagono();
    }

    else
    {
        cout<<endl<<"Fuera de rango";
    }


    return 0;
}