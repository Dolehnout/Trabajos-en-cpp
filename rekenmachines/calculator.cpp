#include <iostream>
#include <math.h>

using namespace std;


void suma()
{
    int cc;double resultado;
    cout<<endl<<"Ingresa 2 para sumar 2 números";
    cout<<endl<<"Ingrese 3 para sumar 3 números";
    cout<<endl<<"Ingrese 4 para sumar 4 números"<<endl;
    cin>>cc;
        if (cc == 2)
            {   
                float i; float k;
                cout<<endl<<"Ingrese 2 números que quieras sumar"<<endl;
                cin>>i; cin>>k;
                resultado = i + k;
                cout<<endl<<"El resultado de " <<i<< " + "<<k<< " es: "<<resultado;
            }
        else if (cc == 3)
            {
                float i; float k; float j;
                cout<<endl<<"Ingresa 3 números que quieras sumar"<<endl;
                cin>>i; cin>>j; cin>>k;
                resultado = i + j + k;
                cout<<endl<<"El resultado de " <<i<< " + " <<j<< " + " <<k<< " es: "<<resultado;
            }
        else if (cc == 4)
            {
                float i; float k; float j; float n;
                cout<<endl<<"Ingresa 4 números que quieras sumar"<<endl;
                cin>>i; cin>>j; cin>>k; cin>>n;
                resultado = i + j + k + n;
                cout<<endl<<"El resultado de " <<i<< " + " <<j<< " + " <<k<< " + " <<n<< " es: "<<resultado;
            }
    
}
void resta()
{
    int cc; 
    cout<<endl<<"Ingresa 2 para restar 2 números";
    cout<<endl<<"Ingrese 3 para restar 3 números";
    cout<<endl<<"Ingrese 4 para restar 4 números"<<endl;      
    float resultado;
    cin>>cc;
        if (cc == 2)
            {   
                float i; float k;
                cout<<endl<<"Ingrese 2 números que quieras restar"<<endl;
                cin>>i; cin>>k;
                resultado = i - k;
                cout<<endl<<"El resultado de " <<i<< " - "<<k<< " es: "<<resultado;
            }
        else if (cc == 3)
            {
                float i; float k; float j;
                cout<<endl<<"Ingresa 3 números que quieras restar"<<endl;
                cin>>i; cin>>j; cin>>k;
                resultado = i - j - k;
                cout<<endl<<"El resultado de " <<i<< " - " <<j<< " - " <<k<< " es: "<<resultado;
            }
        else if (cc == 4)
            {
                float i; float k; float j; float n;
                cout<<endl<<"Ingresa 4 números que quieras restar"<<endl;
                cin>>i; cin>>j; cin>>k; cin>>n;
                resultado = i - j - k - n;
                cout<<endl<<"El resultado de " <<i<< " - " <<j<< " - " <<k<< " - " <<n<< " es: "<<resultado;
            }
}
void multiplicacion()
{
    int cc; 
    cout<<endl<<"Ingresa 2 para multiplicaciones 2 números";
    cout<<endl<<"Ingrese 3 para multiplicaciones 3 números";
    cout<<endl<<"Ingrese 4 para multiplicaciones 4 números"<<endl;
    float resultado;
    cin>>cc;
        if (cc == 2)
            {   
                float i; float k;
                cout<<endl<<"Ingrese 2 números que quieras multiplicar"<<endl;
                cin>>i; cin>>k;
                resultado = i * k;
                cout<<endl<<"El resultado de " <<i<< " x "<<k<< " es: "<<resultado;
            }
        else if (cc == 3)
            {
                float i; float k; float j;
                cout<<endl<<"Ingresa 3 números que quieras multiplicar"<<endl;
                cin>>i; cin>>j; cin>>k;
                resultado = i * j * k;
                cout<<endl<<"El resultado de " <<i<< " x " <<j<< " x " <<k<< " es: "<<resultado;
            }
        else if (cc == 4)
            {
                float i; float k; float j; float n;
                cout<<endl<<"Ingresa 4 números que quieras multiplicar"<<endl;
                cin>>i; cin>>j; cin>>k; cin>>n;
                resultado = i * j * k * n;
                cout<<endl<<"El resultado de " <<i<< " x " <<j<< " x " <<k<< " x " <<n<< " es: "<<resultado;
            }
}
void division()
{
    int cc;
    cout<<endl<<"Ingresa 2 para dividir 2 números";
    cout<<endl<<"Ingrese 3 para dividir 3 números";
    cout<<endl<<"Ingrese 4 para dividir 4 números"<<endl;
    float resultado;
    cin>>cc;
        if (cc == 2)
            {   
                double i; double k;
                cout<<endl<<"Ingrese 2 números que quieras dividir"<<endl;
                cin>>i; cin>>k;
                resultado = i / k;
                cout<<endl<<"El resultado de " <<i<< " ÷ "<<k<< " es: "<<resultado;
            }
        else if (cc == 3)
            {
                double i; double k; double j;
                cout<<endl<<"Ingresa 3 números que quieras dividir"<<endl;
                cin>>i; cin>>j; cin>>k;
                resultado = i / j / k;
                cout<<endl<<"El resultado de " <<i<< " ÷ " <<j<< " ÷ " <<k<< " es: "<<resultado;
            }
        else if (cc == 4)
            {
                double i; double k; double j; double n;
                cout<<endl<<"Ingresa 4 números que quieras dividir"<<endl;
                cin>>i; cin>>j; cin>>k; cin>>n;
                resultado = i / j / k / n;
                cout<<endl<<"El resultado de " <<i<< " ÷ " <<j<< " ÷ " <<k<< " ÷ " <<n<< " es: "<<resultado;
            }
}
void potencia()
{
    double base; double exponente; double resultado = 1;
    cout<<endl<<"El primer número ingresado será la base y el segundo número ingresado será el exponente"<<endl;
    cin>>base; cin>>exponente;
        for (int k = 1; k <= exponente; k++)
            {
                resultado *= base;
            }
    cout<<endl<<"El resultado de "<<base<< " elevado a la "<<exponente<<" es "<<resultado;
}
void raizCuadrada()
{
    double base; double raiz; double resultado;
    cout<<endl<<"El primer número ingresado será la base y el segundo número ingresado será la raiz"<<endl;
    cin>>base; cin>>raiz;
    resultado = pow(base, 1.0/raiz);
    cout<<endl<<"El resultado de "<<base<< " con raiz de "<<raiz<< " es: " <<resultado;
}

int main ()
{
    int elegir; 
    cout<<endl<<"Operaciones básicas";
    cout<<endl<<"1. Suma";
    cout<<endl<<"2. Resta";
    cout<<endl<<"3. Multiplicación";
    cout<<endl<<"4. División";
    cout<<endl<<"5. Potencias";
    cout<<endl<<"6. Raiz Cuadrada"<<endl;
    cin>>elegir;

    if (elegir == 1)
        {
            suma();
        }
    else if (elegir == 2)
        {
            resta();
        }
    else if (elegir == 3)
        {
            multiplicacion();
        }
    else if (elegir == 4)
        {
            division();
        }
    else if (elegir == 5)
        {
            potencia();
        }
    else if (elegir == 6)
        {
            raizCuadrada();
        }
    else 
        {
            cout<<endl<<"La operación no ha sido identificada";
        }

    return 0;
}