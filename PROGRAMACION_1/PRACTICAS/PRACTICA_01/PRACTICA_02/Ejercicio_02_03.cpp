// Materia: Programacion 1, Paralelo 4
// Autor: Helen Mayra Paz Pariguana
// Carnet: 12608230 L.P.
// Carrera del estudiante: Ingeneria de Sistemas
// Fecha de Creacion: 09/09/25
// Numero de Ejercicio: 3

#include <iostream>
#include <cstdlib>
#include <ctime>
using namespace std;
int main() 
{
    srand(time(0));  
    int numAleatorio = rand() % 10 + 1; 
    int factorial = 1;
    for (int contador = 1; contador <= numAleatorio; contador++) 
    {
        factorial = factorial * contador;
    }
    cout << "Numero aleatorio: " << numAleatorio << endl;
    cout << "Factorial: " << factorial << endl;
    return 0;
}
