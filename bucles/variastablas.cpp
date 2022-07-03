#include <iostream> 
using namespace std;
int main ()

{
    /* 

        Se pide por teclado un entero que representa una tabla de multiplicar.
        Se generarán tantas tablas de multiplicar, hasta que la tabla ingresada
        sea igual a 0

        Subir los programas generados en clase en github y compartirlos con el docente 
        - cuenta del docente : kleberposligua
        - utilice el archivo .git ignore para excluir los archivos .exe
        - instalar Clion 
    */
        
    int tabla;
	do
	{
	cout <<  "Ingresa el número al que quieras ver la tabla de multiplicar";
	cin >> tabla;

	int i = 1;
	if (tabla > 0)
	{
	    while (i <= 10)
	    {
		    cout << "\n" << tabla << " x " << i << " = " << (tabla * i) << endl;
		    i++;
        }
	}
	else
	    {
            cout << "Se cierra porque google colocó 0";
	    }
	}
	while(tabla > 0);
    
   return 0; 
}