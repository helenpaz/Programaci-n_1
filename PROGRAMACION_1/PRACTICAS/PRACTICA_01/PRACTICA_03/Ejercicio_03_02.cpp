// Materia: Programacion 1, Paralelo 4
// Autor: Helen Mayra Paz Pariguana
// Carnet: 12608230 L.P.
// Carrera del estudiante: Ingeneria de Sistemas
// Fecha de Creacion: 11/09/25
// Numero de Ejercicio: 2

#include <iostream>
using namespace std;
float convertir(float celsius);  
float resultado; 
int main() 
{
    float c;
    cout << "Ingrese temperatura en Celsius: ";
    cin >> c;
    resultado = convertir(c);
    cout << "Equivale a " << resultado << " Fahrenheit\n";
    return 0;
}

float convertir(float celsius) 
{
    float r;
    r = (celsius * 9 / 5) + 32;
    return r;
}
