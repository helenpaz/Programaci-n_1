// Materia: Programacion 1, Paralelo 4
// Autor: Helen Mayra Paz Pariguana
// Carnet: 12608230 L.P.
// Carrera del estudiante: Ingeneria de Sistemas
// Fecha de Creacion: 11/09/25
// Numero de Ejercicio: 10

#include <iostream>
using namespace std;
float calcularTarifa(float distancia); 
float total; 
int main() 
{
    float km;
    cout << "Ingrese la distancia recorrida en (km): ";
    cin >> km;
    total = calcularTarifa(km);
    cout << "El total a pagar es: " << total << " Bs\n";
    return 0;
}

float calcularTarifa(float distancia) 
{
    float base = 10;
    float extra = distancia * 2;
    float total = base + extra;
    if (distancia > 10) 
    {
        total = total * 0.9; 
    }
    return total;
}
