// Materia: Programacion 1, Paralelo 4
// Autor: Helen Mayra Paz Pariguana
// Carnet: 12608230 L.P.
// Carrera del estudiante: Ingeneria de Sistemas
// Fecha de Creacion: 04/08/25
// Numero de Ejercicio: 17

#include <iostream>
using namespace std;
int main()
 {
    int num_a, num_b, sum_a = 0, sum_b = 0;
    cout << "Ingrese el 1er  numero: " << endl ;
    cin >> num_a;
    cout << "Ingrese el 2do numero: " << endl ;
    cin >> num_b;
    for (int i = 1; i < num_a; i++) 
    {
        if (num_a % i == 0)
        { 
            sum_a += i;
        }
    }
    for (int j = 1; j < num_b; j++) 
    {
        if (num_b % j == 0)
        {
            sum_b += j;
        }
    }
    if (sum_a == num_b && sum_b == num_a)
    {   
        cout << "Son amigos" << endl ;
    }
    else 
    {
        cout << "No son amigos" << endl ;
    }
    return 0;
}
