#include <iostream>
using namespace std;

void percent()
{
    float num = 0;
    float porcent10; float porcent30; float porcent50;
    float res10; float res30; float res50;

    cout<<endl<<"Ingresa el número al cual quieres sacar un porcentaje"<<endl;
    cin>>num;

    porcent10 = num * 10/100;
    porcent30 = num * 30/100;
    porcent50 = num * 50/100;

    cout<<endl<<"El 10% del número ingresado es: "<<porcent10;
    cout<<endl<<"El 30% del número ingresado es: "<<porcent30;
    cout<<endl<<"El 50% del número ingresado es: "<<porcent50<<endl;

    cout<<endl<<"Se sumará el porcentaje + el número ingresado ";
    res10 = porcent10 + num;
    res30 = porcent30 + num;
    res50 = porcent50 + num;

    cout<<endl<<"La suma del número ingresado más su 10% es: "<<res10;
    cout<<endl<<"La suma del número ingresado más su 30% es: "<<res30;
    cout<<endl<<"La suma del número ingresado más su 50% es: "<<res50;

}

void mensualidades()
{
    cout<<endl<<"Para saber cual opción te conviene, ingresa el número"<<endl;
    float dinero = 1200;
    float total;
    float leer;
    cin>>leer;

    if (leer == 1)
        {
            total = (dinero) / (3);
            cout<<endl<<"Opción de pago a 3 meses con un valor de " <<total<< " a pagar";
        }
    else if (leer == 2 )
        {
            total = dinero / 6;
            cout<<endl<<"Opción de pago a 6 meses con un valor de " <<total<< " a pagar";
        }
    else if (leer == 3)
        {
            total = dinero / 9;
            cout<<endl<<"Opción de pago a 9 meses con un valor de " <<total<< " a pagar";
        }
    else if (leer == 4)
        {
            total = dinero / 12;
            cout<<endl<<"Opción de pago a 12 meses con un valor de " <<total<< " a pagar";
        }
    else if (leer == 5)
        {
            total = dinero / 18;
            cout<<endl<<"Opción de pago a 18 meses con un valor de " <<total<< " a pagar";
        }
    else 
    {
        cout<<endl<<"Número fuera de rango";
    }
}

void interes()
{
    float k = 0; float j; float i = 0;
    cout<<endl<<"Intereses a pagar";
    cout<<endl<<"Ingresa el valor al que deseas saber cuánto interés debes pagar"<<endl;
    cin>>k;

    if (k < 75)
        {
            j = (k*6) / 100;
            i = k + j;
            cout<<endl<<"El total a pagar es: "<<i;
        }
    else if (k>75 && k<150)
        {
            j = (k*8) / 100;
            i = k + j;
            cout<<endl<<"El total a pagar es: "<<i;
        }
    else if (k>150 && k<300)
        {
            j = (k*10) / 100;
            i = k + j;
            cout<<endl<<"El total a pagar es: "<<i;
        }
    else if (k>300)
        {
            j = (k*14) / 100;
            i = k + j;
            cout<<endl<<"El total a pagar es: "<<i;
        }
}

void divisas()
{
    float j; float k; float i; float lectura;
    cout<<endl<<"Divisas";
    cout<<endl<<"Ingresa un valor en dólares y escoge un número para que aparezca en la moneda que quieras"<<endl;
    cout<<endl<<"1 = Euro";
    cout<<endl<<"2 = Libra Esterlina";
    cout<<endl<<"3 = Pesos Mexicanos";
    cout<<endl<<"4 = Soles"<<endl;

    cin>>lectura;

    cout<<endl<<"Ahora, ingresa el valor que quieres convertir"<<endl;
    cin>>j;

    if (lectura == 1)
        {
            k = (j / 1.02);
            cout<<endl<<"El valor ingresado a euros es: $"<<k;
        }
    else if (lectura == 2)
        {
            k = (j / 1.23);
            cout<<endl<<"El valor ingresado a libra esterlina es: $"<<k;
        }
    else if (lectura == 3)
        {
            k = (j / 0.049);
            cout<<endl<<"El valor ingresado a pesos mexicanos es: $"<<k;
        }
    else if (lectura == 4)
        {
            k = (j / 0.26);
            cout<<endl<<"El valor ingresado a soles es: $"<<k;
        }
}

int main ()
{
    divisas();


    return 0;
}