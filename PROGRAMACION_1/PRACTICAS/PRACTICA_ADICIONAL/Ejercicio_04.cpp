// Materia: Programacion 1, Paralelo 4
// Autor: Helen Mayra Paz Pariguana
// Carnet: 12608230 L.P.
// Carrera del estudiante: Ingenieria de Sistemas
// Fecha de Creacion: 07/11/25
// Numero de Ejercicio: 4
#include <iostream>
using namespace std;
void leer(int m[10][10], int n);
void mostrar(int m[10][10], int n);
void cambiarFilas(int m[10][10], int n, int a, int b);
int main()
{
    int n, a, b, m[10][10];
    cout << "Orden de la matriz: ";
    cin >> n;
    leer(m, n);
    cout << "Fila A y B a intercambiar: ";
    cin >> a >> b;
    cambiarFilas(m, n, a-1, b-1);
    cout << "\nMatriz resultante:\n";
    mostrar(m, n);
}
void leer(int m[10][10], int n)
{
    for(int i=0;i<n;i++)
        for(int j=0;j<n;j++)
            cin >> m[i][j];
}

void mostrar(int m[10][10], int n)
{
    for(int i=0;i<n;i++)
    {
        for(int j=0;j<n;j++)
            cout << m[i][j] << " ";
        cout << endl;
    }
}
void cambiarFilas(int m[10][10], int n, int a, int b)
{
    for(int j=0;j<n;j++)
    {
        int tmp = m[a][j];
        m[a][j] = m[b][j];
        m[b][j] = tmp;
    }
}
