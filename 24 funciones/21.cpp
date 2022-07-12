#include <iostream>
#include <ctime>

using namespace std;

/*
21. Una función recibe como parámetro 3 enteros que indican el año, mes y día de una fecha cualquiera. 
La función debe devolver los días transcurridos desde esa fecha comparada con la fecha actual de la computadora.
*/
void diasTranscurridos(int anio1, int mes, int dia)
{
  time_t t = time(0);// Obtiene la fecha actual desde el sistema
  tm* now = localtime(&t);
  int anioActual = 1900 + now->tm_year;
  int mesActual = now->tm_mon + 1;
  int diaActual = now->tm_mday;
  int Dtranscurridos = anioActual - anio1;
  cout << Dtranscurridos * 365;
}

int main ()
{

  cout<<endl<<"Han transcurrido "; 
  diasTranscurridos(2002, 11, 9);
  cout<<" días desde tu fecha de nacimiento hasta hoy";

  return 0;
}
