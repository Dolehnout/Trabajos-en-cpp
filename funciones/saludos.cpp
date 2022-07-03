#include <iostream>
using namespace std;

//Una función recibe como parámetro un entero que representa un mes del año
//La función debe devolver el nombr ede ese mes. Por ejemplo: 
//si se ingresa 6, la función devuelve "Junio"
string NombreMes(int mes)
{
    string aux;
    if (mes==1)
    aux = "Enero";
    else if (mes==2)
    aux ="Febrero";
    else if (mes==3)
    aux ="Marzo";
    else if (mes==4)
    aux ="Abril";
    else if (mes==5)
    aux ="Mayo";
    else if (mes==6)
    aux ="Junio";
    else if (mes==7)
    aux ="Julio";
    else if (mes==8)
    aux ="Agosto";
    else if (mes==9)
    aux ="Septiembre";
    else if (mes==10)
    aux ="Octubre";
    else if (mes==11)
    aux ="Noviembre";
    else if (mes==12)
    aux ="Diciembre";
    else
    aux ="Número fuera de rango";

    return aux;
}
//Una función recibe como parámetro un entero que representa
//una tabla de multiplicar, la función debe imprimir la tabla 
//de multiplicar. Desde el main, llame tres veces a esta función
void tablaMultiplicar (int tabla)
{
    cout<<endl<<"La tabla del: "<<tabla;
    for(int i=1; i<=12; i++)
    {
        cout<<endl<<tabla << " x " <<i << " = " <<(tabla*i);
    }
    cout<<endl;

}

//Diseñe la función que envía un saludo
void saludo (string nombre, string genero)
{   
    cout<<endl<<"Hola" << nombre;
    
    if (genero =="m")
        cout<<endl<<"Bienvenido a la clase de algoritmos\n";
    else 
        cout<<endl<<"Bienvenida a la clase de algoritmos\n";
}

int main ()
{
    cout<<endl<<"Ejemplo de función que no devuelve valores";
    saludo(" Melanie " , "f");
    cout<<endl;
    saludo(" Annette " , "f");
    cout<<endl;
    saludo(" Héctor " , "m");
    cout<<endl;
    saludo(" Michael " , "m");
    cout<<endl;
    saludo(" Abigail " , "f");
    cout<<endl;
    saludo(" Xavier " , "m");

    cout<<endl<<"El primer mes es: " <<NombreMes(1);
    cout<<endl<<"El segundo mes es: " <<NombreMes(2);
    cout<<endl<<"El tercer mes es: " <<NombreMes(3);
    cout<<endl<<"El cuarto mes es: " <<NombreMes(4);
    cout<<endl<<"El quinto mes es: " <<NombreMes(5);
    cout<<endl<<"El sexto mes es: " <<NombreMes(6);
    cout<<endl<<"El séptimo mes es: " <<NombreMes(7);
    cout<<endl<<"El octavo mes es: " <<NombreMes(8);
    cout<<endl<<"El noveno mes es: " <<NombreMes(9);
    cout<<endl<<"El décimo mes es: " <<NombreMes(10);
    cout<<endl<<"El décimo primer mes es: " <<NombreMes(11);
    cout<<endl<<"El décimo segundo mes es: \n" <<NombreMes(12);

    tablaMultiplicar (3);
    tablaMultiplicar (5);
    tablaMultiplicar (7);
    tablaMultiplicar (9);
    tablaMultiplicar (11);
    tablaMultiplicar (13);

    return 0;
}