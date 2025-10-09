// Materia: Programacion 1, Paralelo 4
// Autor: Helen Mayra Paz Pariguana
// Carnet: 12608230 L.P.
// Carrera del estudiante: Ingenieria de Sistemas
// Fecha de Creacion: 09/10/25
// Numero de Ejercicio: 1

#include <iostream>
#include <vector>
#include <cmath>
using namespace std;
// Calculando desviacion tipica
int main()
{
    vector<int> edades;
    int edad;
    cout << "Ingrese edades (termine con -1): ";
    while(true)
    {
        cin >> edad;
        if(edad == -1) 
        {
            break;
        }
        edades.push_back(edad);
    }
    float suma = 0;
    for(int i = 0; i < edades.size(); i++) 
    {
        suma += edades[i];
    }
    float promedio = suma / edades.size();
    float des = 0;
    for(int i = 0; i < edades.size(); i++) 
    {
        des += pow(edades[i] - promedio, 2);
    }
    cout << "Desviacion tipica: " << sqrt(des / edades.size());
    return 0;
}


