// Materia: Programacion 1, Paralelo 4
// Autor: Helen Mayra Paz Pariguana
// Carnet: 12608230 L.P.
// Carrera del estudiante: Ingenieria de Sistemas
// Fecha de Creacion: 14/10/25
// Numero de Ejercicio: 4

#include <iostream>
using namespace std;
void generarMatriz(int n, int matriz[50][50]) 
{
    int valor = 1;
    for (int i = 0; i < n; i++) 
    {
        valor = 1 + (i * 2);
        for (int j = 0; j < n; j++) 
        {
            matriz[i][j] = valor + j;
        }
    }
}
void mostrarMatriz(int n, int matriz[50][50]) 
{
    for (int i = 0; i < n; i++) 
    {
        for (int j = 0; j < n; j++) 
        {
            cout << matriz[i][j] << "\t";
        }
        cout << endl;
    }
}
int main() 
{
    int n;
    int matriz[50][50];
    cout << "Ingrese el tamaño n de la matriz: ";
    cin >> n;
    generarMatriz(n, matriz);
    mostrarMatriz(n, matriz);
}