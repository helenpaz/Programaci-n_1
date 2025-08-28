// Materia: Programacion 1, Paralelo 4
// Autor: Helen Mayra Paz Pariguana
// Carnet: 12608230 L.P.
// Carrera del estudiante: Ingeneria de Sistemas
// Fecha de Creacion: 27/08/25
// Numero de Ejercicio: 8

#include <iostream>
using namespace std;
int main() 
{
    int numero = 0;
    cout << "Ingrese un numero entero: " << endl;
    cin >> numero;
    if (numero % 2 == 0)
    {
    cout << "El numero es par" << endl;
    }
    else 
    {
    cout << "El numero es impar" << endl;
    }
    return 0;
}