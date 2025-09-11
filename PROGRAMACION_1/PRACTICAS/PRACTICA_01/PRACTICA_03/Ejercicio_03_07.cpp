// Materia: Programacion 1, Paralelo 4
// Autor: Helen Mayra Paz Pariguana
// Carnet: 12608230 L.P.
// Carrera del estudiante: Ingeneria de Sistemas
// Fecha de Creacion: 11/09/25
// Numero de Ejercicio: 7

#include <iostream>
using namespace std;
float calcularPromedios(int e1, int e2, int e3, float a1, float a2, float a3);
int mayoresEdad, altos;
int main()
{
    int edad1, edad2, edad3;
    float altura1, altura2, altura3;
    float promedio;
    cout << "Ingrese la edad y altura del alumno 1: ";
    cin >> edad1 >> altura1;
    cout << "Ingrese la edad y altura del alumno 2: ";
    cin >> edad2 >> altura2;
    cout << "Ingrese la edad y altura del alumno 3: ";
    cin >> edad3 >> altura3;
    promedio = calcularPromedios(edad1, edad2, edad3, altura1, altura2, altura3);
    cout << "Edad promedio: " << promedio << endl;
    cout << "Mayores de 18: " << mayoresEdad << endl;
    cout << "Altos (>1.75m): " << altos << endl;
    return 0;
}

float calcularPromedios(int e1, int e2, int e3, float a1, float a2, float a3)
{
    int suma = e1 + e2 + e3;
    mayoresEdad = 0;
    altos = 0;
    if (e1 > 18) 
    {   
        mayoresEdad++;
    }
    if (e2 > 18)    
    {    
        mayoresEdad++;
    }
    if (e3 > 18) 
    {
        mayoresEdad++;
    }
    if (a1 > 1.75) 
    {
        altos++;
    }
    if (a2 > 1.75) 
    {
        altos++;
    }
    if (a3 > 1.75) 
    {
        altos++;
    }
    return suma / 3.0;
}
