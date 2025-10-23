// Materia: Programacion 1, Paralelo 4
// Autor: Helen Mayra Paz Pariguana
// Carnet: 12608230 L.P.
// Carrera del estudiante: Ingenieria de Sistemas
// Fecha de Creacion: 23/10/25
// Numero de Ejercicio: 2

#include <iostream>
using namespace std;
int potencia(int base, int exponente) 
{
    if (exponente == 0)
    {
        return 1;
    }
    return base * potencia(base, exponente - 1);
}
int main() 
{
    int numa, numero;
    cout << "Ingrese la base: ";
    cin >> numa;
    cout << "Ingrese el exponente: ";
    cin >> numero;
    cout << "Resultado: " << potencia(numa, numero) << endl;
    return 0;
}