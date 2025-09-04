// Materia: Programacion 1, Paralelo 4
// Autor: Helen Mayra Paz Pariguana
// Carnet: 12608230 L.P.
// Carrera del estudiante: Ingeneria de Sistemas
// Fecha de Creacion: 04/08/25
// Numero de Ejercicio: 22

#include <iostream>
using namespace std;
int main() 
{
    int num_a, num_b;
    cout << "Ingrese el 1er numero: " << endl ;
    cin >> num_a ;
    cout << "Ingrese el 2do numero: " << endl ;
    cin >> num_b ;
    if (num_a % num_b == 0)
    {
        cout << num_a << " es multiplo de " << num_b;
    }
    else if (num_b % num_a == 0) 
    {
        cout << num_b << " es multiplo de " << num_a;
    }
    else
    {
        cout << "Ninguno es multiplo del otro";
    }
    return 0;
}
