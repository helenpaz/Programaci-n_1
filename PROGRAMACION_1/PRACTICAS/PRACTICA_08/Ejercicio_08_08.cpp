// Materia: Programacion 1, Paralelo 4
// Autor: Helen Mayra Paz Pariguana
// Carnet: 12608230 L.P.
// Carrera del estudiante: Ingenieria de Sistemas
// Fecha de Creacion: 23/10/25
// Numero de Ejercicio: 8

#include <iostream>
using namespace std;
void ullman(int numero) 
{
    cout << numero << " ";
    if (numero == 1)
    {
        return;
    }
    if (numero % 2 == 0)
    {
        ullman(numero / 2);
    }
    else
    {
        ullman(3 * numero + 1);
    }
}
int main() 
{
    int numero;
    cout << "Ingrese un entero positivo: ";
    cin >> numero;
    cout << "Secuencia de Ullman: ";
    ullman(numero);
    cout << endl;
    return 0;
}