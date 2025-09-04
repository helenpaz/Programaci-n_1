// Materia: Programacion 1, Paralelo 4
// Autor: Helen Mayra Paz Pariguana
// Carnet: 12608230 L.P.
// Carrera del estudiante: Ingeneria de Sistemas
// Fecha de Creacion: 04/08/25
// Numero de Ejercicio: 19

#include <iostream>
using namespace std;
int main() 
{
    int numero;
    cout << "Ingrese un numero: ";
    cin >> numero;
    for (int i = 1; i <= 10; i++) 
    {
        cout << numero << " x " << i << " = " << numero * i << endl;
    }
    return 0;
}

