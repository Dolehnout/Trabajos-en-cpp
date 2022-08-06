/*
La calificación final de un estudiante es la media ponderada de tres notas:
La nota de las prácticas que cuenta con un 30% del total, la nota teóritca que cuenta
un 60% y la nota de participación que cuenta del 10% restante. Crea un programa
que lea de la entrada estándar las tres notas de un alumno y que aparezca en la salida
su nota final. Si el estudiante tiene una nota final menor a 70, es reprobado.
*/

#include <iostream>
using namespace std;

int main ()
{
    float notaPracticas; float notaTeorica; float notaParticipacion; float notaFinal;

    cout<<endl<<"Digite la nota total de las prácticas"<<endl; cin>>notaPracticas;
    cout<<endl<<"Digite la nota total de la parte teórica"<<endl; cin>>notaTeorica;
    cout<<endl<<"Digite la nota total de las participaciones en clase"<<endl; cin>>notaParticipacion;

    //Hacer los cálculos

    notaFinal = (notaPracticas * 0.3) + (notaTeorica * 0.6) + (notaParticipacion * 0.1);
    cout<<"La nota final es: "<<notaFinal;  

    if (notaFinal > 85 )
        {
            cout<<endl<<"Felicitaciones, has aprobado esta materia y no rendirás examen final";
        }
    else if (notaFinal < 85 && notaFinal >= 70)
        {
            cout<<endl<<"Tendrás que rendir el examen final";
        }
    else 
        {
            cout<<endl<<"No has aprobado la materia";
        }

    return 0;
}