#include <iostream>
#include <ctime>

using namespace std;

/*
20. Una función recibe como parámetro 3 enteros que indican el año, mes y día del nacimiento de una persona. 
La función debe devolver la edad de la persona en años, meses y días. 
Debe investigar como capturar la fecha actual de la computadora.
*/
void Edad(int anio, int mes, int dia)
{
  time_t t = time(0);// Obtiene la fecha actual desde el sistema
  tm* now = localtime(&t);
  int anioActual = 1900 + now->tm_year;
  int mesActual = now->tm_mon + 1;
  int diaActual = now->tm_mday;
  anio = anioActual - anio;
  dia *= 365;
  mes = 365 * anio;
  mes /= 30;
  cout << "Actualemente tienes: " << anio << " años, " << mes << " meses, " << dia << " dias" <<endl;
}

int main ()
{
  Edad(2002, 11, 9);

  return 0;

}
