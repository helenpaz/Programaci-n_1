// Materia: Programacion 1, Paralelo 4
// Autor: Helen Mayra Paz Pariguana
// Carnet: 12608230 L.P.
// Carrera del estudiante: Ingeneria de Sistemas
// Fecha de Creacion: 04/08/25
// Numero de Ejercicio: 21

#include <iostream>
using namespace std;
int main()
 {
    int num_a, num_b, resultado = 0;
    cout << "Ingrese el 1er numero: " << endl ;
    cin >> num_a ;
     cout << "Ingrese el 2do numero: " << endl ;
    cin >> num_b ;
    for (int i = 0; i < num_b; i++) 
    {
        resultado += num_a;
    }
    cout << "Resultado: " << resultado;
    return 0;
}
