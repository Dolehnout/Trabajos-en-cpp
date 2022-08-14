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

int funcionCuadratica(double &x1, double &x2)
{
    double a, b, c;
    cout<<endl<<"Escribe el valor de a, b, c"<<endl;
    cin>>a>>b>>c;
    if (a==0) //Error división para 0
        return -1;

    double D;
    D=(b*b)-(4*a*c);

    if (D<0) //Error de raiz cuadrada, discriminante negativo
        return 0;

    x1=(-b+sqrt(D))/(2*a);
    x2=(-b-sqrt(D))/(2*a);

    return 1;
}

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

void numPorcentaje()
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

void tablaMultiplicar()
{   
    cout<<endl<<"Ingresa un número y saldrá su tabla de multiplicar del 1 al 100";
    double j;cout<<endl;cin>>j;

    for (double k = 1; k<=100; k++)
    {
        cout<<endl<<j<< " x " <<k<< " = " <<j*k;
    }
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
    cout<<endl<<"6. Raiz Cuadrada";
    cout<<endl<<"7. Fórmula general"<<endl;
    cout<<endl<<"Área y perímetro de algunas figuras geométricas";
    cout<<endl<<"8. Triángulo";
    cout<<endl<<"9. Pentágono";
    cout<<endl<<"10. Heptágono"<<endl;
    cout<<endl<<"Varios";
    cout<<endl<<"11. Buscar porcentaje de un número";
    cout<<endl<<"12. Pagar mensualmente un producto";
    cout<<endl<<"13. Interés de un producto";
    cout<<endl<<"14. Convertir de dólar a otra moneda";
    cout<<endl<<"15. Tabla de multiplicar de un número"<<endl;
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
    else if (elegir == 7)
        {
            double x1, x2;
            int respuesta = funcionCuadratica(x1, x2);

            if (respuesta==1)
                {
                    cout<<endl<<"La solución para X1 es: "<<x1;
                    cout<<endl<<"La solución para X2 es: "<<x2;
                }
            else if (respuesta==-1)
                {
                    cout<<endl<<"Error al dividir para 0";
                }
            else if (respuesta==0)
                {
                    cout<<endl<<"La discriminate es negativo (Soluciones imaginarias)";
                }

                }
    else if (elegir == 8)
        {
            triangulo();
        }
    else if (elegir == 9)
        {
            pentagono();
        }
    else if (elegir == 10)
        {
            heptagono();
        }
    else if (elegir == 11)
        {
            numPorcentaje();
        }
    else if (elegir == 12)
        {
            mensualidades();
        }
    else if (elegir == 13)
        {
            interes();
        }
    else if (elegir == 14)
        {
            divisas();
        }
    else if (elegir == 15)
        {
            tablaMultiplicar();
        }
    else 
        {
            cout<<endl<<"La operación no ha sido identificada";
        }
    return 0;
}