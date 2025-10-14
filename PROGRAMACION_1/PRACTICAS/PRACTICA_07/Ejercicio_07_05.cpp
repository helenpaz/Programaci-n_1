// Materia: Programacion 1, Paralelo 4
// Autor: Helen Mayra Paz Pariguana
// Carnet: 12608230 L.P.
// Carrera del estudiante: Ingenieria de Sistemas
// Fecha de Creacion: 14/10/25
// Numero de Ejercicio: 5

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
void multiplicarMatrices(int A[50][50], int B[50][50], int C[50][50], int N, int M) 
{
    for (int i = 0; i < N; i++) 
    {
        for (int j = 0; j < N; j++) 
        {
            C[i][j] = 0;
            for (int k = 0; k < M; k++) 
            {
                C[i][j] += A[i][k] * B[k][j];
            }
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
    int A[50][50], B[50][50], C[50][50];
    cout << "Ingrese N (filas de la primera y columnas de la segunda): ";
    cin >> N;
    cout << "Ingrese M (columnas de la primera y filas de la segunda): ";
    cin >> M;
    cout << "\nIngrese los elementos de la primera matriz (" << N << "x" << M << "):\n";
    leerMatriz(N, M, A);
    cout << "\nIngrese los elementos de la segunda matriz (" << M << "x" << N << "):\n";
    leerMatriz(M, N, B);
    multiplicarMatrices(A, B, C, N, M);
    cout << "\nResultado de la multiplicación (" << N << "x" << N << "):\n";
    mostrarMatriz(N, N, C);
    return 0;
}