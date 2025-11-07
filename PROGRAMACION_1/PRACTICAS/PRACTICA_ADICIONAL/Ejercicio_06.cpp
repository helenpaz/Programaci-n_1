// Materia: Programacion 1, Paralelo 4
// Autor: Helen Mayra Paz Pariguana
// Carnet: 12608230 L.P.
// Carrera del estudiante: Ingenieria de Sistemas
// Fecha de Creacion: 07/11/25
// Numero de Ejercicio: 6
#include <iostream>
using namespace std;
void rotar(int v[], int n, int k);
void mostrar(int v[], int n);
int main()
{
    int n, k, v[100];
    cout << "Cantidad de elementos: ";
    cin >> n;
    for(int i=0;i<n;i++)
    {
        cout << "Elemento " << i+1 << ": ";
        cin >> v[i];
    }
    cout << "Rotar K posiciones: ";
    cin >> k;
    rotar(v, n, k);
    cout << "Vector rotado: ";
    mostrar(v, n);
}
void rotar(int v[], int n, int k)
{
    int temp[100];
    for(int i=0;i<n;i++)
        temp[(i+k)%n] = v[i];
    for(int i=0;i<n;i++)
        v[i] = temp[i];
}
void mostrar(int v[], int n)
{
    for(int i=0;i<n;i++)
        cout << v[i] << " ";
    cout << endl;
}
