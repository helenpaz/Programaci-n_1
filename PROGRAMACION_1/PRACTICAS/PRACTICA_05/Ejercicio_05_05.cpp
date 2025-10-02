// Materia: Programacion 1, Paralelo 4
// Autor: Helen Mayra Paz Pariguana
// Carnet: 12608230 L.P.
// Carrera del estudiante: Ingeneria de Sistemas
// Fecha de Creacion: 02/10/25
// Numero de Ejercicio: 5

#include <iostream>
using namespace std;
int main() 
{
    int N;
    cout << "Dimension de los vectores: ";
    cin >> N;
    int v1[100], v2[100], v3[200];
    for(int i=0; i<N; i++) 
    {
        cout << "v1[" << i << "] = ";
        cin >> v1[i];
    }
    for(int i=0; i<N; i++) 
    {
        cout << "v2[" << i << "] = ";
        cin >> v2[i];
    }
    for(int i=0; i<N; i++) 
        v3[i] = v1[i];
    for(int i=0; i<N; i++) 
        v3[N+i] = v2[i];
    cout << "Vector combinado: ";
    for(int i=0; i<2*N; i++) cout << v3[i] << " ";
    cout << endl;
    return 0;
}