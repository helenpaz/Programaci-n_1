// Materia: Programacion 1, Paralelo 4
// Autor: Helen Mayra Paz Pariguana
// Carnet: 12608230 L.P.
// Carrera del estudiante: Ingenieria de Sistemas
// Fecha de Creacion: 14/10/25
// Numero de Ejercicio: 6

#include <iostream>
using namespace std;
void leerMatriz(int filas, int columnas, int matriz[50][50]) 
{
    for (int i = 0; i < filas; i++) 
    {
        for (int j = 0; j < columnas; j++) 
        {
            cout << "Elemento [" << i << "][" << j << "]: ";
            cin >> matriz[i][j];
        }
    }
}
void transponerMatriz(int filas, int columnas, int matriz[50][50], int transpuesta[50][50]) 
{
    for (int i = 0; i < filas; i++) 
    {
        for (int j = 0; j < columnas; j++) 
        {
            transpuesta[j][i] = matriz[i][j];
        }
    }
}
void mostrarMatriz(int filas, int columnas, int matriz[50][50]) 
{
    for (int i = 0; i < filas; i++) 
    {
        for (int j = 0; j < columnas; j++) 
        {
            cout << matriz[i][j] << "\t";
        }
        cout << endl;
    }
}
int main() 
{
    int N, M;
    int matriz[50][50], transpuesta[50][50];
    cout << "Ingrese el número de filas (N): ";
    cin >> N;
    cout << "Ingrese el número de columnas (M): ";
    cin >> M;
    leerMatriz(N, M, matriz);
    transponerMatriz(N, M, matriz, transpuesta);
    cout << "\nMatriz transpuesta (" << M << "x" << N << "):\n";
    mostrarMatriz(M, N, transpuesta);
    return 0;
}