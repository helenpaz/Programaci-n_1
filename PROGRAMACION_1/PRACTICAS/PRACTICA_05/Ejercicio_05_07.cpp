// Materia: Programacion 1, Paralelo 4
// Autor: Helen Mayra Paz Pariguana
// Carnet: 12608230 L.P.
// Carrera del estudiante: Ingeneria de Sistemas
// Fecha de Creacion: 02/10/25
// Numero de Ejercicio: 7

#include <iostream>
using namespace std;
int main() 
{
    int v[10], n = 0;
    for(int i=0; i<10; i++) 
    {
        int num;
        cout << "Numero: ";
        cin >> num;
        if(num < 0) break;
        v[n] = num;
        n++;
    }
    cout << "Vector ingresado: ";
    for(int i=0; i<n; i++) 
        cout << v[i] << " ";
    cout << endl;
    return 0;
}