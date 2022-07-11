#include <iostream>
#include <math.h>
#include <ctime>

using namespace std;

/*
1. Escriba la función que recibe como parámetro 3 números reales de doble precisión y devuelve el promedio de estos números.
*/

double promedio(double n1, double n2, double n3)
{
    return (n1+n2+n3)/3;
}

/*
2. Escriba la función que recibe como parámetro 3 números reales de doble precisión y devuelve el promedio de estos números. 
Además, en un parámetro pasado por referencia devuelve la sumatoria de los mismos.
*/

double promedio(double n1, double n2, double n3, double& suma)
{
    //Suma es un parámetro por referencia
    //n1, n2 y n3 son parámetros por valor
    suma = (n1+n2+n3);
    return suma/3;
}

/*
3. Escriba la función que determina si un número pasado como parámetro es par o impar.
*/
bool parImpar(int num)
{   
     //retorna true cuando es par, false cuando es impar
    if(num % 2==0)
        return true; //Es par
     else 
        return false; //Es impar

         //Otra manera -- return num % 2;
}

/* 4. (Principal)
Escriba la función que determina si un número pasado como parámetro es múltiplo de 5
*/

void multiplos(int multiplo)
{
    cout<<endl<<"Ejercicio 4";
    if (multiplo % 5==0)
        cout<<endl<<multiplo<<" es múltiplo de 5";
    else if (multiplo % 3==0)
        cout<<endl<<multiplo<<" es múltiplo de 3";
    else if (multiplo % 7==0)
        cout<<endl<<multiplo<<" es múltiplo de 7";
    else 
        cout<<endl<<multiplo<<" no es múltiplo de 5, 3 o 7";
}

/*
5. Escriba la función que recibe como parámetro 1 entero y devuelve el cubo del mismo.
*/

int Cubo(int cubo3)
{   
    cout<<endl<<"Ejercicio 5";
    cout<<endl;
    cout<<"El cubo de " << cubo3 << " es: ";

    return cubo3*cubo3*cubo3;
}

/*
6. Una función recibe 2 enteros como parámetros, el primero es el número base, mientras que el segundo indica el exponente al que se va elevar el número base.
Por ejemplo, si el primer número es 2 y el segúndo número es 5, el proceso a realizar sería 2 x 2 x 2 x 2 x 2 = 32 
(en otras palabras 2 elevado a la quinta potencia).
*/

int potencia (int base, int exponente)
{
    int resultado = 1;
    for (int j=1; j<=exponente; j++)
    resultado=resultado*base;
    return resultado;
}

/*
7. Diseñe la función que determina la cantidad de cifras que tiene un número entero - este entero pasa como parámetro. Por ejemplo:

si el número es 12 tiene 2 cifras

si el número es 157 tiene 3 cifras

si el número es 999 tiene 3 cifras

si el número es 15000 tiene 5 cifras. 

si el número es -145 tiene 3 cifras
*/

void cantcifras(int v)
{
    cout<<endl<<"Ejercicio 7";

    if(v >=10 && v<=99 )
        cout<<endl<<"El número " << v << " tiene 2 cifras";
    else if (v >=100 && v<=999)
        cout<<endl<<"El número " << v << " tiene 3 cifras";
    else if (v >=1000 && v<=9999)
        cout<<endl<<"El número " << v << " tiene 4 cifras";
    else if (v >=10000 && v<=99999)
        cout<<endl<<"El número " << v << " tiene 5 cifras";
    else if (v >=100000 && v<=999999)
        cout<<endl<<"El número " << v << " tiene 6 cifras";
    else 
        cout<<endl<<"El número " << v << " tiene 1 cifras";
}

/*
8. Escriba la función que recibe como parámetro 1 entero positivo e imprime su equivalente en binario.
*/

string binario(int n)
{   
    string bin;
    while (n!= 0)
    {
        bin += (n % 2 == 0 ? "0" : "1" );
        n/= 2;
    }
    return bin;
}

/*
9. Diseñe la función que recibe como parámetro 1 entero positivo que indica una tabla de multiplicar. La función debe imprimir la tabla de multiplicar desde el 1 al 15. Por ejemplo:

5 x 1 = 5

5 x 2 = 10

5 x 3 = 15

...

...

5 x 15 = 75
*/

void multiplicar(int num)
{
    cout<<endl<<"Ejercicio 9";
    for (int i; i <= 15; i++)
    {
        cout <<endl<< num << " x " << i << " = " << (num*i);
    }
    cout<<endl;
}

/*
10. Diseñe la función que recibe como parámetro 1 entero positivo que indica una tabla de multiplicar. La función debe imprimir la tabla de multiplicar desde el 12 al 1. Por ejemplo:

5 x 12 = 60

5 x 11 = 55

5 x 10 = 50

...

...

5 x 1 = 5
*/

void multiplicar2(int num)
{
    cout<<endl<<"Ejercicio 10";
    for (int i = 12; i >= 1; i--)
    {
        cout <<endl<< num << " x " << i << " = " << (num*i);
    }
    cout<<endl;
  
}

/*11. Diseñe la función que recibe como parámetro un entero N comprendido 1 y 10. 
La función debe imprimir las tablas de múltiplicar desde el 1 a N. Por ejemplo, si N=3, se imprimirá:
Tabla del 1
1 x 1 = 1
1 x 2 = 2
...
1 x 10 = 10
Tabla del 2
2 x 1 = 2
2 x 2 = 4
...
2 x 10 = 20
Tabla del 3
3 x 1 = 3
3 x 2 = 3
...
3 x 10 = 30*/

void tablas(int n) 
{ 
    cout<<endl<<"Ejercicio 11";
    if (n >= 1; n <= 10){
    for(int mul=1;mul<=n;mul++)
        for(int i=1;i<=10;i++) {
        cout<<endl<<mul<<" x "<<i<<" = "<<(mul*i); 
    }
  }
    cout<<endl;
}

/*
12. Diseñe la función que calcula la ecuación cuadrática, usando las fórmulas siguientes:
x1 = (-b+ raizCuadrada(b*b - 4*a*c))/(2*a)
x2 = (-b- raizCuadrada(b*b - 4*a*c))/(2*a)
Los valores a,b,c pasan como parámetros de la función.
x1 - x2 son parámetros por referencia que devuelven los resultados de la ecuación.
La función devuelve 1 si es una ecuación válida, y 0 si la ecuación no es válida.
*/

int funcionCuadrada(double a, double b, double c, double &x1, double &x2)
{
    cout<<endl<<"Ejercicio 12";
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

/*
13. Diseñe la función que devuelve el resultado de la siguiente serie:

1 - 2 + 3 - 4 + 5 - 6 + 7 - N

N es un parámetro que indica el límite de la serie
*/

int sumatorias(int nnn)
{   
    cout<<endl<<"Ejercicio 13";
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

/*
14. Diseñe la función que calcula el resultado de la siguiente serie:
2^1 + 3^2 + 4^3 + 5^4 + ... N^(N-1)
N es un parámetro que indica el límite de la serie
Nota: El simbolo ^ significa: elevado a
*/

int potencia99(int base, int exponente)
{
    int resultado=1;
    for (int k=1; k<=exponente; k++)
        resultado=resultado*base;
        return resultado;
}

//Función para realizar la suma de potencias
int seriePotencia(int n)
{
    int suma=0;
    for(int j=2; j<=n; j++)
        suma=suma+potencia99(j,j-1);

    return suma;
}

/*
15. Diseñe la función que calcula el resultado de la siguiente serie:

2! - 3! + 4! - 5! + 6! - N!

N es un parámetro que indica el límite de la serie

Nota: El símbolo ! significa: factorial
*/

double factoriall(int num)
{   
    double fac= 1;
    //Ejemplo 5!= 1*2*3*4*5
    for (int k=1; k<=num; k++)
    {
        fac=fac*k;
    }
    return fac;
}

double seriefactorial(int n)
{   
    double suma = 0;
    bool flag=true; 
    for (int k=2; k<=n; k++)
    {
        if (flag==true)
        {
            suma=suma+factoriall(k);
        }
        else 
        {
            suma=suma-factoriall(k);
        }
        flag=!flag;
    }
    return suma;
}

/*
16. Una función recibe como parámetro un entero que indica las filas de una figura. 
Adicionalmente, recibe como parámetro un string que indica el relleno de la figura a dibujar. 
Por ejemplo, si filas es 4 y el relleno es '+', la figura sería:

+

++

+++

++++
*/
void filas(string filas, int numfilas)
{
    cout<<endl<<"Ejercicio 16";
    cout<<endl;
    for(int i = 1; i <= numfilas; ++i)
    {
        for(int j = 1; j <= i; ++j)
        {
            cout<<filas;
        }
        cout<<endl;
    }
}

/*
17. Figura en espejo: Una función recibe como parámetro un entero que indica las filas de una figura. 
Adicionalmente, recibe como parámetro un string que indica el relleno de la figura a dibujar. 
Por ejemplo, si filas es 4 y el relleno es 'o', la figura sería:
o

oo

ooo

oooo

ooo

oo

o
*/

void filas2(int n)
{
    cout<<endl<<"Ejercicio 17";
    cout<<endl;
    for (int i=0; i<n; i++)
    {
        for(int j=0; j<=i; j++ )
        {
            cout << "o";
        }
        cout<<endl;
    }
    for (int i=n-1; i>0; i--)
    {
        for(int j=0; j<i; j++ )
        {
            cout << "o";
        }
        cout << endl;
    }
}

/* Ejercicio 18
Una función que recibe 3 números enteros. 
La función devuelve verdadero si uno de estos números es la suma de los otros 2
*/

bool numeros(int n1, int n2, int n3)
{
    cout<<endl<<"Ejercicio 18";
    if (n1==n2+n3)
        return true;
    if (n2==n1+n3)
        return true;
    if (n3==n1+n2)
        return true;
    else 
        return false;
}

/*
19. Una función recibe como parámetro un entero. 
La función debe imprimir este entero en su equivalente en hexadecimal(base 16).
*/

void hexadecimal(int num)
{
    //Bucle: repetir proceso

    while (num > 0)
    {
        int res = num % 16;
        num = num / 16;
        if (res==10)
            cout<<"A";
        else if (res==11)
            cout<<"B";
        else if (res==12)
            cout<<"C";
        else if (res==13)
            cout<<"D";
        else if (res==14)
            cout<<"E";
        else if (res==15)
            cout<<"F";
        else
            cout<<res;
    }
}

/*
23. Una función recibe como parámetro un entero que indica la edad de una persona en días. 
La función debe imprimir la edad de la persona en años, meses y días.
*/

void edadActual(int anioNac, int mesNac, int diaNac)
{
    cout<<endl;
    cout<<endl<<"Ejercicio 23";
    //https://foroayuda.es/obtener-la-fecha-actual-en-el-ejemplo-de-codigo-c/
    time_t t = time(0);// Obtiene la fecha actual desde el sistema
    tm* now = std::localtime(&t);
    int anioActual = 1900 + now->tm_year;
    int mesActual = now->tm_mon + 1;
    int diaActual = now->tm_mday;
 
    int diasTranscFechaActual = (anioActual * 360) + (mesActual*30) + diaActual;
    int diasTranscFechaNac = (anioNac * 360) + (mesNac*30) + diaNac;
 
    int edadDias = diasTranscFechaActual - diasTranscFechaNac;
    int anio = edadDias / 360;
    int mes = (edadDias % 360) / 30;
    int dia = (edadDias % 360) % 30;
 
    cout<<endl<<"Usted tiene "<< anio <<" año(s), ";
    cout<<mes <<" mes(es), ";
    cout<<dia <<" día(s)";
}

int main ()
{
    //Ejercicio 1
    cout<<endl<<"Ejercicio 1";
    double p;
    cout<<endl<<"Promedio de 3 números";
    p=promedio(18.5, 20.11, 23.99);
    cout<<endl<<"El promedio es: "<<p;
    cout<<endl;

    //Ejercicio 2
    cout<<endl<<"Ejercicio 2";
    double suma;
    p=promedio(22.4, 35, 30, suma);
    cout<<endl<<"La suma de 22.4 + 53 + 30 es: " <<suma;
    cout<<", y el promedio es: "<<p;
    cout<<endl;

    //Ejercicio 3
    cout<<endl<<"Ejercicio 3";
    int ll =15;
    if(parImpar (ll)==true) //Otra manera-- if(parImpar (n))
    {
        cout<<endl<<ll<<", es par";
        cout<<endl;
    }
    else 
    {
        cout<<endl<<ll<<", es impar";
        cout<<endl;
    }

    //Ejercicio 4
    multiplos(33);
    cout<<endl;
    multiplos(40);
    cout<<endl;
    multiplos(14);
    cout<<endl;
    multiplos(37);

    //Ejercicio 5
    cout<<endl;
    cout<<endl<<Cubo(64);
    cout<<endl<<Cubo(2);
    cout<<endl<<Cubo(5);

    //Ejercicio 6
    cout<<endl;
    cout<<endl<<"Ejercicio 6";
    cout<<endl<<"5 elevado a la 10 es: "<<potencia(5,10);
    cout<<endl;

    //Ejercicio 7
    cantcifras(1);
    cantcifras(23);
    cantcifras(500);
    cantcifras(1300);
    cantcifras(50032);
    cantcifras(123981);

    //Ejercicio 8
    cout<<endl;
    cout<<endl<<"Ejercicio 8";
    cout<<endl;
    int num = 17;
    cout<<"decimal: "<< num << endl;
    cout<<"binario: "<< binario(num) << endl;

    //Ejercicio 9
    multiplicar(3);

    //Ejercicio 10
    multiplicar2(5);

    //Ejercicio 11
    tablas(3);

    //Ejercicio 12
    double x1, x2;
    int respuesta = funcionCuadrada(1,6.6,4, x1, x2);

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

    //Ejercicio 13
    cout<<endl;
    int resultados= sumatorias(8);
    cout<<endl<<"La sumatoria de la serie cuando N es 8 es: ";
    cout<<resultados;
    cout<<endl;

    //Ejercicio 14
    cout<<endl<<"Ejercicio 14";
    cout<<endl<<"2 elevado a la 5 potencia es: "<<potencia99(2,5);
    //Suma de potencia
    cout<<endl<<"El resultado de la serie cuando n es 8 es: ";
    cout<<seriePotencia(8);
    cout<<endl;

    //Ejercicio 15
    cout<<endl<<"Ejercicio 15";
    cout<<endl<<"El factorial de 5 es: "<<factoriall(5);
    cout<<endl<<"El factorial de 6 es: "<<factoriall(6);
    cout<<endl<<"La suma de la serie de los factoriales cuando n es 6 es: "<<seriefactorial(6);
    cout<<endl<<"La suma de la serie de los factoriales cuando n es 7 es: "<<seriefactorial(7);

    //Ejercicio 16
    cout<<endl;
    filas("+", 5);

    //Ejercicio 17
    cout << "\n";
    int n = 3;
    filas2(n);

    //Ejercicio 18
    bool x = numeros(10,5,5);
    if (x==true)
    cout<<endl<<"Verdadero";
    else
    cout<<endl<<"Falso";

    //Ejercicio 19
    cout<<endl;
    cout<<endl<<"Ejercicio 19";
    cout<<endl;
    hexadecimal(1256);

    //Ejercicio 23
    //Fecha de nacimiento de la persona
    int anioNac = 2004;
    int mesNac = 11;
    int diaNac = 9;
 
    edadActual(anioNac, mesNac, diaNac);

    return 0;
}