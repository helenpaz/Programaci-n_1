// Materia: Programacion 1, Paralelo 4
// Autor: Helen Mayra Paz Pariguana
// Carnet: 12608230 L.P.
// Carrera del estudiante: Ingeneria de Sistemas
// Fecha de Creacion: 27/08/25
// Numero de Ejercicio: 12

#include <iostream>
using namespace std;
int main() 
{
    int numero;
    do 
    {
        cout << "Ingrese un numero entre 1 y 5: ";
        cin >> numero;
        if (numero < 1 || numero > 5)
            cout << "Numero invalido" << endl;
    } while (numero < 1 || numero > 5);
    cout << "Numero valido: " << numero << endl;
    return 0;
}