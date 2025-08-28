// Materia: Programacion 1, Paralelo 4
// Autor: Helen Mayra Paz Pariguana
// Carnet: 12608230 L.P.
// Carrera del estudiante: Ingeneria de Sistemas
// Fecha de Creacion: 27/08/25
// Numero de Ejercicio: 10

#include <iostream>
using namespace std;
int main() 
{
    int nota = 0;
    cout << "Ingrese la nota del estudiante: " << endl;
    cin >> nota;
    if (nota >=51 )
    {
        if (nota < 60 )
        {
            cout << " Usted tiene la calificacion C" << endl;
        }
        else if (nota < 70)
        {
            cout << " Usted tiene la calificacion C+" << endl;
        }
        else if (nota < 80)
        {
            cout << " Usted tiene la calificacion B" << endl;
        }
        else if (nota < 90)
        {
            cout << " Usted tiene la calificacion B+" << endl;
        }
        else if (nota < 95)
        {
            cout << " Usted tiene la calificacion A" << endl;
        }
        else if (nota <= 100)
        {
            cout << " Usted tiene la calificacion A+" << endl;
        }
    }
    else 
    {
        cout << " Usted reprobo" << endl;
    }
    return 0;
}