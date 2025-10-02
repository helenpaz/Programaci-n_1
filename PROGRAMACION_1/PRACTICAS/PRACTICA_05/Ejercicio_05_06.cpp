// Materia: Programacion 1, Paralelo 4
// Autor: Helen Mayra Paz Pariguana
// Carnet: 12608230 L.P.
// Carrera del estudiante: Ingeneria de Sistemas
// Fecha de Creacion: 02/10/25
// Numero de Ejercicio: 6

#include <iostream>
using namespace std;
int main() 
{
    int v1[5], v2[5], v3[5];
    cout << "Ingrese vector 1:" << endl;
    for(int i=0; i<5; i++) 
        cin >> v1[i];
    cout << "Ingrese vector 2:" << endl;
    for(int i=0; i<5; i++) 
        cin >> v2[i];
    for(int i=0; i<5; i++) 
    {
        v3[i] = v1[i] + v2[i];
    }
    cout << "Vector 3 (suma): ";
    for(int i=0; i<5; i++) 
        cout << v3[i] << " ";
    cout << endl;
    return 0;
}