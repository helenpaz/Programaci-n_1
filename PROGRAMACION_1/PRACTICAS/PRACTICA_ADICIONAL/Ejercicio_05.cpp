// Materia: Programacion 1, Paralelo 4
// Autor: Helen Mayra Paz Pariguana
// Carnet: 12608230 L.P.
// Carrera del estudiante: Ingenieria de Sistemas
// Fecha de Creacion: 07/11/25
// Numero de Ejercicio: 5
#include <iostream>
using namespace std;
void generarMatriz(int m[10][10], int n);
void mostrarMatriz(int m[10][10], int n);
int sumaUltColumna(int m[10][10], int n);
int productoUltFila(int m[10][10], int n);
int main()
{
    int n;
    cout << "Ingrese el orden de la matriz: ";
    cin >> n;
    int m[10][10];
    generarMatriz(m, n);
    cout << "\nMatriz generada:\n";
    mostrarMatriz(m, n);
    int suma = sumaUltColumna(m, n);
    int prod = productoUltFila(m, n);
    cout << "\nSuma de la ultima columna: " << suma;
    cout << "\nProducto de la ultima fila: " << prod << endl;
    return 0;
}
void generarMatriz(int m[10][10], int n)
{
    for(int i=0;i<n;i++)
        for(int j=0;j<n;j++)
            m[i][j] = 1 + 2*i + j;
}
void mostrarMatriz(int m[10][10], int n)
{
    for(int i=0;i<n;i++)
    {
        for(int j=0;j<n;j++)
            cout << m[i][j] << "\t";
        cout << endl;
    }
}
int sumaUltColumna(int m[10][10], int n)
{
    int s = 0;
    for(int i=0;i<n;i++)
        s += m[i][n-1];
    return s;
}
int productoUltFila(int m[10][10], int n)
{
    int p = 1;
    for(int j=0;j<n;j++)
        p *= m[n-1][j];
    return p;
}

