// Materia: Programacion 1, Paralelo 4
// Autor: Helen Mayra Paz Pariguana
// Carnet: 12608230 L.P.
// Carrera del estudiante: Ingeneria de Sistemas
// Fecha de Creacion: 27/08/25
// Numero de Ejercicio: 6

#include <iostream>
using namespace std;
int main() 
{
    int numero ;
    cout << "Ingrese un numero entero: " << endl;
    cin >> numero;
    if (numero == 0)
    {
        cout << "El numero es cero"<< endl;
    }
    else if (numero > 0)
    {
        cout << "El numero es positivo"<< endl;
    }
    else
    {
        cout << "El numero es negativo"<< endl;
    }
    return 0;
}