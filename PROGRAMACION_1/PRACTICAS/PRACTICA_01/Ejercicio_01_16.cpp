// Materia: Programacion 1, Paralelo 4
// Autor: Helen Mayra Paz Pariguana
// Carnet: 12608230 L.P.
// Carrera del estudiante: Ingeneria de Sistemas
// Fecha de Creacion: 27/08/25
// Numero de Ejercicio: 16

#include <iostream>
using namespace std;
int main() 
{
    int numero;
    int contador = 0;
    cout << "Ingrese el numero: " << endl;
    cin >> numero;
    for (int i = 1; i <= numero; i++)
        if (numero % i == 0)
            contador++;
    if (contador == 2)
        cout << "El numero " << numero << " es primo" << endl;
    else
        cout << "El numero " << numero << " no es primo" << endl;
    return 0;
}