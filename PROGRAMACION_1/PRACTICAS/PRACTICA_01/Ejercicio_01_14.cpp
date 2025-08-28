// Materia: Programacion 1, Paralelo 4
// Autor: Helen Mayra Paz Pariguana
// Carnet: 12608230 L.P.
// Carrera del estudiante: Ingeneria de Sistemas
// Fecha de Creacion: 27/08/25
// Numero de Ejercicio: 14

#include <iostream>
using namespace std;
int main() 
{
    int N;
    cout << "Ingrese un numero" << endl;
    cin >> N ;
    for (int i=1; i<=N ; i++)
    {
        for (int j=0; j<i; j++)
            cout << "*" ;
        cout << endl;
    }
    return 0;
}