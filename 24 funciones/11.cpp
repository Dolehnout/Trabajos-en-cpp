#include <iostream>
using namespace std;

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
}

int main() 
{
    tablas(3);
    return 0;
}

