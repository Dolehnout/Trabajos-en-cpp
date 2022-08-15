#include <iostream>
#include <windows.h>
#include <stdlib.h>
#include <time.h>

using namespace std;

/* retorna "a - b" en segundos */
double performancecounter_diff(LARGE_INTEGER *a, LARGE_INTEGER *b)
{
  LARGE_INTEGER freq;
  QueryPerformanceFrequency(&freq);
  return (double)(a->QuadPart - b->QuadPart) / (double)freq.QuadPart;
}

//Intercambio de valores
void swap(int &a, int &b)
{
    int aux=0; 
    aux = a; 
    a=b; 
    b=aux;
}

int generaNumAleatorio(int limite)
{
    int num = 1+rand()%(limite); //genera un número aleatorio entre 1 y limite
    return num;
}
 
void llenarVector(int vector[], int TOTAL)
{
    for(int k=0; k < TOTAL; k++)
    {
        vector[k]=generaNumAleatorio(50000);
    }
}
 
void imprimirVector(int vector[], int TOTAL)
{
    cout<<endl<<"Elementos del vector: " <<endl;
    for(int k=0; k < TOTAL; k++)
    {
        cout<<vector[k] << "  ";
    }
}

void ordenSecuencial(int vector[], int total)
{
    for(int i=0; i<total; i++)
        {
            for(int j=i+1; j<total; j++)
                {
                    if(vector[i]>vector[j])
                        {
                            swap(vector[i], vector[j]);
                        }
                }
        }
}
//BURBUJA
void ordenBurbuja(int v[], int n)
{
    int i=0,j=0;
    int aux;
    for(i=1;i<n;i++)
        for(j=0;j<(n-i);j++)
        {
            if(v[j]>v[j+1])
            {
                aux=v[j];
                v[j]=v[j+1];
                v[j+1]=aux;
            }
        }
}

void burbujaMejorado(int arreglo[], int tamano)
{
    int comparaciones = tamano;
    bool termino = false;
    for (int i = 0; i<(tamano-1) ; i++)
    {
        if (termino)
            break;
        termino = true;
        for (int j = 0; j<comparaciones-1 ; j++)
            if(arreglo[j] > arreglo[j+1])
            {
                swap(arreglo[j],arreglo[j+1]);
                termino = false;
            }
        comparaciones--;
    }
}

void OrdenamientoQuicksort(int a[], int primerValor, int ultimoValor)
{
    int central, i, j, pivote;
    central= (primerValor+ultimoValor)/2; //Posicion central del arreglo
    pivote= a[central]; //Capturar el valor medio del arreglo
    i = primerValor;
    j = ultimoValor;
    do{
        //Separando en dos partes el arreglo
        while(a[i] < pivote) i++; //Separando los valores menores al pivote
        while(a[j] > pivote) j--; //Separando los valores mayores al pivote
        if(i<=j)
        {
            int temporal;
            //Intercambio de valores
            temporal = a[i];
            a[i] = a[j];
            a[j] = temporal;
            i++;
            j--;
        }
    }while(i<=j);
    if (primerValor < j)
        OrdenamientoQuicksort(a, primerValor, j);
    if (i < ultimoValor)
        OrdenamientoQuicksort(a, i, ultimoValor);
}

void ordenShell(int a[], int n)
{
    int ints,i,aux;
    bool band;
    ints=n;
    while(ints>1)
    {
        ints=ints/2;
        band=true;
        while(band==true)
        {
            band=false;
            i=0;
            while((i+ints)<n)
            {
                if(a[i]>a[i + ints])
                {
                    aux=a[i];
                    a[i]=a[i + ints];
                    a[i + ints]=aux;
                    band=true;
                }
                i++;
            }
        }
    }
}

void ordenShell2(int a[], int n)
{
    //Shell Mejorado
    int i,j,inc;
    int temp;
    for(inc=1;inc<n;inc=inc*3+1);
    while(inc>0)
    {
        for(i=inc;i<n;i++)
        {
            j=i;
            temp=a[i];
            while((j>=inc)&&(a[j-inc]>temp))
            {
                a[j]=a[j-inc];
                j=j-inc;
            }
            a[j]=temp;
        }
        inc=inc/2;
    }
}

int main ()
{
    srand(time(NULL));

    LARGE_INTEGER t_ini, t_fin;
    double secs;
    const int TOTAL = 70000;
    int vectorSecuencial[TOTAL];
    int vectorBurbuja[TOTAL];
    int vectorBurbujaMejorado[TOTAL];
    int vectorQSort[TOTAL];
    int vectorShell[TOTAL];
    int vectorShellMejorado[TOTAL];
    //Llnear los vectores con los mismos elementos
    for(int k=0; k < TOTAL; k++)
    {
        int num = generaNumAleatorio(100000000);
        vectorSecuencial[k]=num;
        vectorBurbuja[k]=num;
        vectorBurbujaMejorado[k]=num;
        vectorQSort[k]=num;
        vectorShell[k]=num;
        vectorShellMejorado[k]=num;
    }

    //Prueba con ordenamiento secuencial con 1000 elementos.
    std::cout << "Ordenación Secuencial con " <<TOTAL<< " elementos"<< std::endl;
    QueryPerformanceCounter(&t_ini);
    ordenSecuencial(vectorSecuencial, TOTAL);
    QueryPerformanceCounter(&t_fin);
 
    secs = performancecounter_diff(&t_fin, &t_ini);
    std::cout << "Ordenamiento secuencial: " << secs * 1000.0 << std::endl;
    cout<<endl;

    //Prueba con ordenamiento burbuja con 1000 elementos.
    std::cout << "Ordenación burbuja con " <<TOTAL<< " elementos"<< std::endl;
    QueryPerformanceCounter(&t_ini);
    ordenBurbuja(vectorBurbuja, TOTAL);
    QueryPerformanceCounter(&t_fin);
 
    secs = performancecounter_diff(&t_fin, &t_ini);
    std::cout << "Ordenamiento burbuja: " << secs * 1000.0 << std::endl;
    cout<<endl;

    //Prueba con ordenamiento burbuja mejorado con 1000 elementos.
    std::cout << "Ordenación burbuja mejorado con " <<TOTAL<< " elementos"<< std::endl;
    QueryPerformanceCounter(&t_ini);
    burbujaMejorado(vectorBurbujaMejorado, TOTAL);
    QueryPerformanceCounter(&t_fin);
 
    secs = performancecounter_diff(&t_fin, &t_ini);
    std::cout << "Ordenamiento burbuja mejorado: " << secs * 1000.0 << std::endl;
    cout<<endl;
    
    //Prueba con ordenamiento Qsort con 1000 elementos.
    std::cout << "Ordenación Qsort con " <<TOTAL<< " elementos"<< std::endl;
    QueryPerformanceCounter(&t_ini);
    OrdenamientoQuicksort(vectorQSort,0,TOTAL);
    QueryPerformanceCounter(&t_fin);
 
    secs = performancecounter_diff(&t_fin, &t_ini);
    std::cout << "Ordenamiento Qsort: " << secs * 1000.0 << std::endl;
    cout<<endl;

    //Prueba con ordenamiento Shell con 1000 elementos.
    std::cout << "Ordenación Shell con " <<TOTAL<< " elementos"<< std::endl;
    QueryPerformanceCounter(&t_ini);
    ordenShell(vectorShell,TOTAL);
    QueryPerformanceCounter(&t_fin);
 
    secs = performancecounter_diff(&t_fin, &t_ini);
    std::cout << "Ordenamiento Shell: " << secs * 1000.0 << std::endl;
    cout<<endl;

    //Prueba con ordenamiento ShellMejorado con 1000 elementos.
    std::cout << "Ordenación Shell con " <<TOTAL<< " elementos"<< std::endl;
    QueryPerformanceCounter(&t_ini);
    ordenShell2(vectorShellMejorado,TOTAL);
    QueryPerformanceCounter(&t_fin);
 
    secs = performancecounter_diff(&t_fin, &t_ini);
    std::cout << "Ordenamiento ShellMejorado: " << secs * 1000.0 << std::endl;

    return 0;
} 