// Materia: Programacion 1, Paralelo 4
// Autor: Helen Mayra Paz Pariguana
// Carnet: 12608230 L.P.
// Carrera del estudiante: Ingenieria de Sistemas
// Fecha de Creacion: 23/10/25
// Numero de Ejercicio: 5

#include <iostream>
using namespace std;
int sumaVector(int vector[], int numero) 
{
    if (numero == 0)
    {
        return 0;
    }
    return vector[numero - 1] + sumaVector(vector, numero - 1);
}
int main() 
{
    int numero;
    cout << "Ingrese el tamanio del vector: ";
    cin >> numero;
    int vector[50];
    for (int i = 0; i < numero; i++) 
    {
        cout << "v[" << i << "] = ";
        cin >> vector[i];
    }
    cout << "La suma de los elementos es: " << sumaVector(vector, numero) << endl;
    return 0;
}