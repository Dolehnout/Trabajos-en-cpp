#include <windows.h>
#include <iostream>
#include <iomanip>
#include <ctime>
#include <sstream>
 
using namespace std;
 
/*
22. Escriba la función que recupera la hora actual de la computadora 
y la imprime por pantalla. Luego intente hacer el proceso para que la hora se actualice cada segundo.
*/
void horaActual()
{

  bool exit = false;
  int i = 0;
  while(exit == false)
  {
  i++;
  auto t = time(nullptr);
  auto tm = *localtime(&t);

  ostringstream oss;
  oss << put_time(&tm, "%d-%m-%Y %H:%M:%S");
  auto str = oss.str();

  cout << str << endl;
  if (GetAsyncKeyState(VK_ESCAPE))
  {
   exit = true;
  }
  }

  //cout<<i<<", Presiona la tecla escape para salir!!! "<<endl;
}

int main ()
{
  horaActual();
  return 0;
}