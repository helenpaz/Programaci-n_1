// Materia: Programacion 1, Paralelo 4
// Autor: Helen Mayra Paz Pariguana
// Carnet: 12608230 L.P.
// Carrera del estudiante: Ingeneria de Sistemas
// Fecha de Creacion: 27/08/25
// Numero de Ejercicio: 3

#include <iostream>
using namespace std;
int main() 
{
    int base = 0;
    int altura = 0;
    int area_triangulo = 0;
    cout << "Ingrese la base del triangulo: " << endl;
    cin >> base;
    cout << "Ingrese la altura del triangulo: " << endl;
    cin >> altura;
    area_triangulo = base * altura / 2 ;
    cout << "El area del triangulo es:  " << area_triangulo << endl;
    return 0;
}