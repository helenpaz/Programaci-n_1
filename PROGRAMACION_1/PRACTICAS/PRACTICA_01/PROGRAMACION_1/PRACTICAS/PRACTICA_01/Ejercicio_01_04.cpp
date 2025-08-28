// Materia: Programacion 1, Paralelo 4
// Autor: Helen Mayra Paz Pariguana
// Carnet: 12608230 L.P.
// Carrera del estudiante: Ingeneria de Sistemas
// Fecha de Creacion: 27/08/25
// Numero de Ejercicio: 4

#include <iostream>
using namespace std;
int main() 
{
    double radio = 0;
    double volumen = 0;
    const double pi = 3.1416;
    cout << "Ingrese el radio de la esfera: " << endl;
    cin >> radio; 
    volumen = (4.0 / 3.0) * pi * radio * radio * radio;
    cout << "El volumen de la esfera es:  " << volumen << endl;
    return 0;
}