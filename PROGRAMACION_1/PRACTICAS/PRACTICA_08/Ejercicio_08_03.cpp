// Materia: Programacion 1, Paralelo 4
// Autor: Helen Mayra Paz Pariguana
// Carnet: 12608230 L.P.
// Carrera del estudiante: Ingenieria de Sistemas
// Fecha de Creacion: 23/10/25
// Numero de Ejercicio: 3

#include <iostream>
using namespace std;
int fibonacci(int numero) 
{
    if (numero == 0) 
    {
        return 0;
    }
    if (numero == 1) 
    {
        return 1;
    }
    return fibonacci(numero - 1) + fibonacci(numero - 2);
}
int main() 
{
    int numero;
    cout << "Ingrese la posicion n: ";
    cin >> numero;
    cout << "El numero Fibonacci en la posicion " << numero << " es: " << fibonacci(numero) << endl;
    return 0;
}