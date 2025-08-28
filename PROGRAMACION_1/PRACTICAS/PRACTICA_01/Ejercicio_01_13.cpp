// Materia: Programacion 1, Paralelo 4
// Autor: Helen Mayra Paz Pariguana
// Carnet: 12608230 L.P.
// Carrera del estudiante: Ingeneria de Sistemas
// Fecha de Creacion: 27/08/25
// Numero de Ejercicio: 13

#include <iostream>
using namespace std;
int main() 
{
    int numero = 0;
    int suma = 0;
    int i;
    cout << "Ingrese los numeros: " << endl;
    cin >> numero;
    for ( i = 1 ; i <= numero ; i++)
        suma += i;
    cout << "La suma de los numeros es: " << suma << endl ;
    return 0;
}