#include <iostream>
using namespace std;

/* Una función recibe como parámetro 1 entero que indica el mes de año. 
   La función debe devolver el total de días que tiene ese mes. 
   Por ejemplo, si el mes es 3, debe devolver 31. Si el mes es 6, debe devolver 30. 
   Si el mes es 12 debe devolver 31. etc.*/

string meses(int mes)
{
    string mensual;
    if (mes == 1)
        mensual = "\nEnero = 31";
    else if(mes == 2)
        mensual = "\nFebrero = 29";
    else if(mes == 3)
        mensual = "\nMarzo = 31";
    else if(mes == 4)
        mensual = "\nAbril = 30";
    else if(mes == 5)
        mensual = "\nMayo = 31";
    else if(mes == 6)
        mensual = "\nJunio = 30";
    else if(mes == 7)
        mensual = "\nJulio = 31";
    else if(mes == 8)
        mensual = "\nAgosto = 31";
    else if(mes == 9)
        mensual = "\nSeptiembre = 30";
    else if(mes == 10)
        mensual = "\nOctubre = 31";
    else if(mes == 11)
        mensual = "\nNoviembre = 30";
    else if(mes == 12)
        mensual = "\nDiciembre = 31";
    else
        mensual = "Número fuera de rango";
    return mensual;
}

/* Una función recibe como parámetro 1 entero que indica el número de filas de un rectángulo. 
 Por ejemplo si la fila es 5, se imprimen 5 filas, como se muestra a continuación:*/

/* * * * * * * * * *
* * * * * * * * * *
* * * * * * * * * *
* * * * * * * * * *
* * * * * * * * * */

void filas(int fila)
{
    int i;
    while (i < fila)
    {
        cout << "\n* * * * * * * * * *";
        i++;
    }

}

/*  Escriba la función que devuelve el factorial de un número. 
    El factorial se calcula solo si el número está entre 1 y 15. 
    Si el número no está en este rango, la función devuelve -1.*/ 

void factorial(int factorial)
{
    int n;
    int s = 1;
    int x;
    if (factorial >= 1; factorial <= 15)
    {
        for (int x = 1; x <= factorial;)
        {
            s = (s * x);
            x++;
            cout << "\n" << s;
        }
    }
    else
    {
        cout <<endl<< "Número fuera de rango, devolverá -1";
    }
}

/* Una función recibe como parámetro 1 entero que indica el día de la semana. 
   La función debe devolver el nombre del día de la semana. Por ejemplo, si es 1, devuelve "LUNES" */

string Semana(int dia)
{
    string dias;
    if (dia == 1)
    {
        dias = "Lunes";
    }
    else if (dia == 2)
    {
        dias = "Martes";
    }
    else if (dia == 3)
    {
        dias = "Miércoles";
    }
    else if (dia == 4)
    {
        dias = "Jueves";
    }
    else if (dia == 5)
    {
        dias = "Viernes";
    }
    else if (dia == 6)
    {
        dias = "Sábado";
    }
    else if (dia == 7)
    {
        dias = "Domingo";
    }
    else
        dias = "Número fuera de rango";
    return dias;
}
int main()
{
    //Para imprimir los días
    cout << "El día de la semana es: " << Semana(1);
    cout << "\nEl día de la semana es: " << Semana(2);
    cout << "\nEl día de la semana es: " << Semana(3);
    cout << "\nEl día de la semana es: " << Semana(4);
    cout << "\nEl día de la semana es: " << Semana(5);
    cout << "\nEl día de la semana es: " << Semana(6);
    cout << "\nEl día de la semana es: " << Semana(7);
    cout << "\nEl día de la semana es: " << Semana(8);

    //Para imprimir los asteriscos
    filas(5);

    //Para imprimir el factorial de un número
    cout << "\n";
    factorial(9);
    cout << "\n";
    factorial(3);
    cout << "\n";
    factorial(5);
    cout << "\n";
    factorial(11);
    cout << "\n";
    factorial(16);
    
    //Para imprimir el total de días de un mes
    cout << "\n" << meses(1);
    cout << meses(2);
    cout << meses(3);
    cout << meses(4);
    cout << meses(5);
    cout << meses(6);
    cout << meses(7);
    cout << meses(8);
    cout << meses(9);
    cout << meses(10);
    cout << meses(11);
    cout << meses(12);
}