// Materia: Programacion 1, Paralelo 4
// Autor: Helen Mayra Paz Pariguana
// Carnet: 12608230 L.P.
// Carrera del estudiante: Ingenieria de Sistemas
// Fecha de Creacion: 07/11/25
// Numero de Ejercicio: 2
#include <iostream>
#include <cstdlib>
#include <ctime>
using namespace std;
void generar(int v[], int n, int a, int b);
void invertir(int v[], int inv[], int n);
void sumar(int v1[], int v2[], int v3[], int n);
void multiplicar(int v1[], int v2[], int v4[], int n);
void mostrar(int v[], int n);
int main()
{
    srand(time(0));
    int n, a, b;
    cout << "Ingrese N: "; cin >> n;
    cout << "Rango A y B: "; cin >> a >> b;
    int v1[100], v2[100], v3[100], v4[100], inv[100];
    generar(v1, n, a, b);
    generar(v2, n, a, b);
    invertir(v2, inv, n);
    sumar(v1, v2, v3, n);
    multiplicar(v1, inv, v4, n);
    cout << "\nVector 1: "; mostrar(v1, n);
    cout << "Vector 2: "; mostrar(v2, n);
    cout << "Vector 3 (suma): "; mostrar(v3, n);
    cout << "Vector 4 (v1 x invertido(v2)): "; mostrar(v4, n);
    return 0;
}
void generar(int v[], int n, int a, int b)
{
    for(int i=0; i<n; i++)
        v[i] = a + rand() % (b - a + 1);
}
void invertir(int v[], int inv[], int n)
{
    for(int i=0; i<n; i++)
        inv[i] = v[n-1-i];
}
void sumar(int v1[], int v2[], int v3[], int n)
{
    for(int i=0; i<n; i++)
        v3[i] = v1[i] + v2[i];
}
void multiplicar(int v1[], int v2[], int v4[], int n)
{
    for(int i=0; i<n; i++)
        v4[i] = v1[i] * v2[i];
}
void mostrar(int v[], int n)
{
    for(int i=0; i<n; i++)
        cout << v[i] << " ";
    cout << endl;
}
