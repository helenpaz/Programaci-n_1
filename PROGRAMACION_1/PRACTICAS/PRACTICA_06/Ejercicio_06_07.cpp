// Materia: Programacion 1, Paralelo 4
// Autor: Helen Mayra Paz Pariguana
// Carnet: 12608230 L.P.
// Carrera del estudiante: Ingenieria de Sistemas
// Fecha de Creacion: 09/10/25
// Numero de Ejercicio: 7

#include <iostream>
#include <vector>
#include <cstdlib>
#include <ctime>
using namespace std;
void generarPixeles(vector<int>& pixeles, int n) 
{
    srand(time(0));
    for (int i = 0; i < n; i++) 
    {
        pixeles.push_back(rand() % 256);
    }
}
void mostrarPixeles(const vector<int>& pixeles) 
{
    cout << "Pixeles: ";
    for (size_t i = 0; i < pixeles.size(); i++) 
    {
        cout << pixeles[i] << " ";
    }
    cout << endl;
}
void agruparEnRangos(const vector<int>& pixeles) 
{
    int rangos[26];
    for (int i = 0; i < 26; i++) 
    {
        rangos[i] = 0;
    }

    for (size_t i = 0; i < pixeles.size(); i++) 
    {
        int valor = pixeles[i];
        int indice = valor / 10;
        if (indice > 25) 
        {
            indice = 25;
        }
        rangos[indice]++;
    }
    for (int i = 0; i < 26; i++) 
    {
        int inicio = i * 10;
        int fin = (i == 25) ? 255 : (inicio + 9);
        cout << inicio << "-" << fin << ": " << rangos[i] << " pixel";
        if (rangos[i] != 1) 
        {
            cout << "es";
        }
        cout << endl;
    }
}
int main() 
{
    int n;
    cout << "Ingrese el numero de pixeles: ";
    cin >> n;
    vector<int> pixeles;
    generarPixeles(pixeles, n);
    mostrarPixeles(pixeles);
    agruparEnRangos(pixeles);
    return 0;
}

