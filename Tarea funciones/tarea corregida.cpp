#include <iostream>
using namespace std;
/*Una función recibe como parámetro 1 entero que indica el día de la Semana. 
La función debe devolver el nombre del día de la semana. Por ejemplo, si es 1, devuelve "LUNES"*/
string nombresemana(int dias)
{
    string aux="";
    switch (dias)
    {
        case 1: aux="Lunes";
            break;
        case 2: aux="Martes";
            break;
        case 3: aux="Miércoles";
            break;
        case 4: aux="Jueves";
            break;
        case 5: aux="Viernes";
            break;
        case 6: aux="Sábado";
            break;
        case 7: aux="Domingo";
            break;
        default: 
            aux = "Día fuera de rango";
            break;
    }
    return aux;
}

/*Escriba la función que devuelve el factorial de un número. 
El factorial se calcula solo si el número está entre 1 y 15. Si el número no está en este rango, la función devuelve -1.
Ejemplo: El factorial de 5 es 5x4x3x2x1 = 120. El factorial de 6 es 6x5x4x3x2x1 = 720*/

//

double factorial (int num)
{
    double fact=1;
    if (num >= 1 && num <=20)
        {
            for (int i=1; i<=num; i++)
            fact=fact*i; //fact*=i
        }
    else 
        fact=-1;

    return fact;
}

/*Una función recibe como parámetro 1 entero que indica el número de filas de un rectángulo. 
Por ejemplo si la fila es 5, se imprimen 5 filas, como se muestra a continuación:

* * * * * * * * * *

* * * * * * * * * *

* * * * * * * * * *

* * * * * * * * * *

* * * * * * * * * **/

//

void rectangulo(int fila)
{
    {
        for(int j=1; j<=fila; j++)
        cout<<endl<<"**********";
    }
    cout<<endl;
}

/*Una función recibe como parámetro 1 entero que indica el mes de año. La función debe devolver el total de días que tiene ese mes. 
Por ejemplo, si el mes es 3, debe devolver 31. Si el mes es 6, debe devolver 30. Si el mes es 12 debe devolver 31. etc.*/

//

int mesdias(int mes)
{   
    int diastotales=0;
    if (mes==1 || mes==3 || mes==5 || mes==7 || mes==8 || mes==10 ||mes==12)
    diastotales=31;
    else if(mes==4 || mes==6 || mes==9 || mes==11)
    diastotales=30;
    else if(mes==2)
    diastotales=28;
    else 
        diastotales=-1; //Mes fuera de rango
    return diastotales;
}


int main ()
{
    //Días de la semana
    cout<<"\nProbando la función que devuelve el nombre de los días de la semana";
    cout<<"El día 1 es: \n" <<nombresemana(1);
    cout<<"\nEl día 2 es: " <<nombresemana(2);
    cout<<"\nEl día 3 es: " <<nombresemana(3);
    cout<<"\nEl día 4 es: " <<nombresemana(4);
    cout<<"\nEl día 5 es: " <<nombresemana(5);
    cout<<"\nEl día 6 es: " <<nombresemana(6);
    cout<<"\nEl día 7 es: " <<nombresemana(7);
    int dia=7;
    cout<<"\nEl dia " <<dia << " es: " <<nombresemana(dia);
    cout<<"\nEl día 8 es: " <<nombresemana(8);
    dia = 8;
    cout<<"\nEl dia " <<dia << " es: " <<nombresemana(dia);

    //Factorial

     cout<<"\nProbando la función factorial";
     cout<<endl<<"El factorial de 5 es: " <<factorial(5);
     cout<<endl<<"El factorial de 6 es: " <<factorial(6);
     cout<<endl<<"El factorial de 7 es: " <<factorial(7);
     cout<<endl<<"El factorial de 8 es: " <<factorial(8);
     cout<<endl<<"El factorial de 9 es: " <<factorial(9);
     cout<<endl<<"El factorial de 10 es: " <<factorial(10);
     cout<<endl<<"El factorial de 12 es: " <<factorial(12);
     cout<<endl<<"El factorial de 16 es: " <<factorial(16);
     cout<<endl<<"El factorial de 19 es: " <<factorial(19);
     cout<<endl<<"El factorial de 20 es: " <<factorial(20);
     cout<<endl<<"El factorial de 21 es: " <<factorial(21);

     //Rectángulo

     cout<<"\nProbando la función que imprime rectángulo";
     rectangulo(5);
     rectangulo(3);
     rectangulo(10);

     //Meses

    cout<<"\nProbando la función que obtiene el total de días de un mes";
    cout<<endl<<"Enero tiene "<< mesdias(1) << " días";
    cout<<endl<<"Febrero tiene "<< mesdias(2) << " días";
    cout<<endl<<"Marzo tiene "<< mesdias(3) << " días";
    cout<<endl<<"Abril tiene "<< mesdias(4) << " días";
    cout<<endl<<"Mayo tiene "<< mesdias(5) << " días";
    cout<<endl<<"Junio tiene "<< mesdias(6) << " días";
    cout<<endl<<"Julio tiene "<< mesdias(7) << " días";
    cout<<endl<<"Agosto tiene "<< mesdias(8) << " días";
    cout<<endl<<"Septiembre tiene "<< mesdias(9) << " días";
    cout<<endl<<"Octubre tiene "<< mesdias(10) << " días";
    cout<<endl<<"Noviembre tiene "<< mesdias(11) << " días";
    cout<<endl<<"Diciembre tiene "<< mesdias(12) << " días";
    return 0;
}
