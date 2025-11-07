// Materia: Programacion 1, Paralelo 4
// Autor: Helen Mayra Paz Pariguana
// Carnet: 12608230 L.P.
// Carrera del estudiante: Ingenieria de Sistemas
// Fecha de Creacion: 07/11/25
// Numero de Ejercicio: 8
#include <iostream>
using namespace std;
void leer(int m[10][10], int n);
void mostrar(int m[10][10], int n);
void transpuesta(int m[10][10], int t[10][10], int n);
bool esSimetrica(int m[10][10], int t[10][10], int n);
int main()
{
    int n, m[10][10], t[10][10];
    cout << "Orden de la matriz: ";
    cin >> n;
    leer(m, n);
    transpuesta(m, t, n);
    cout << "\nMatriz transpuesta:\n";
    mostrar(t, n);
    if(esSimetrica(m, t, n))
        cout << "La matriz es simetrica.\n";
    else
        cout << "No es simetrica.\n";
}
void leer(int m[10][10], int n)
{
    for(int i=0;i<n;i++)
        for(int j=0;j<n;j++)
            cin >> m[i][j];
}
void mostrar(int m[10][10], int n)
{
    for(int i=0;i<n;i++){
        for(int j=0;j<n;j++)
            cout << m[i][j] << " ";
        cout << endl;
    }
}
void transpuesta(int m[10][10], int t[10][10], int n)
{
    for(int i=0;i<n;i++)
        for(int j=0;j<n;j++)
            t[j][i] = m[i][j];
}
bool esSimetrica(int m[10][10], int t[10][10], int n)
{
    for(int i=0;i<n;i++)
        for(int j=0;j<n;j++)
            if(m[i][j] != t[i][j])
                return false;
    return true;
}
