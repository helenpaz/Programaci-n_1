// Materia: Programacion 1, Paralelo 4
// Autor: Helen Mayra Paz Pariguana
// Carnet: 12608230 L.P.
// Carrera del estudiante: Ingenieria de Sistemas
// Fecha de Creacion: 23/10/25
// Numero de Ejercicio: 7

#include <iostream>
using namespace std;
int Q(int numero) 
{
    if (numero == 1)
    {
        return 1; 
    }
    return numero * numero + Q(numero - 1);  
}
int main() 
{
    int numero;
    cout << "Ingrese el valor de n: ";
    cin >> numero;
    cout << "El resultado de Q(" << numero << ") es: " << Q(numero) << endl;
    return 0;
}