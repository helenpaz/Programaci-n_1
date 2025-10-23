// Materia: Programacion 1, Paralelo 4
// Autor: Helen Mayra Paz Pariguana
// Carnet: 12608230 L.P.
// Carrera del estudiante: Ingenieria de Sistemas
// Fecha de Creacion: 23/10/25
// Numero de Ejercicio: 6

#include <iostream>
using namespace std;
bool vectoresIguales(int v1[], int v2[], int numero) 
{
    if (numero == 0)
    {
        return true;
    }
    if (v1[numero - 1] != v2[numero - 1])
    {
        return false;
    }
    return vectoresIguales(v1, v2, numero - 1);
}
int main() 
{
    int numero;
    cout << "Ingrese el tamanio de los vectores: ";
    cin >> numero;
    int v1[50], v2[50];
    cout << "Ingrese los elementos del 1er vector:\n";
    for (int i = 0; i < numero; i++) 
    {
        cin >> v1[i];
    }
    cout << "Ingrese los elementos del 2do vector:\n";
    for (int i = 0; i < numero; i++) 
    {
        cin >> v2[i];
    }
    if (vectoresIguales(v1, v2, numero))
    {
        cout << "Los vectores son iguales." << endl;
    }
    else
    {
        cout << "Los vectores son diferentes." << endl;
    }
    return 0;
}