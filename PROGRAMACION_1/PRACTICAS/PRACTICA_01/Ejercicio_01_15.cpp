// Materia: Programacion 1, Paralelo 4
// Autor: Helen Mayra Paz Pariguana
// Carnet: 12608230 L.P.
// Carrera del estudiante: Ingeneria de Sistemas
// Fecha de Creacion: 27/08/25
// Numero de Ejercicio: 15

#include <iostream>
using namespace std;
int main() 
{
    int N_notas;
    double notas;
    double suma_notas = 0;
    double promedio;
    cout << "Ingrese la cantidad de notas a sumar: " << endl;
    cin >> N_notas;
    for (int i=1 ; i<=N_notas; i++)
    {
        cout << "Ingrese la nota numero: " << i << endl;
        cin >> notas;
        suma_notas += notas;
    }
    promedio = suma_notas / N_notas;
    cout << "El promedio es: "<< promedio << endl ;
    return 0;
}