// Materia: Programacion 1, Paralelo 4
// Autor: Helen Mayra Paz Pariguana
// Carnet: 12608230 L.P.
// Carrera del estudiante: Ingenieria de Sistemas
// Fecha de Creacion: 09/10/25
// Numero de Ejercicio: 6

#include <iostream>
#include <vector>
#include <cstdlib>
#include <ctime>
using namespace std;
void llenarCalificaciones(vector<int>& calificaciones, int n) 
{
    srand(time(0));
    for (int i = 0; i < n; i++) 
    {
        calificaciones.push_back(rand() % 101);
    }
}
void mostrarCalificaciones(const vector<int>& calificaciones) 
{
    cout << "Calificaciones: ";
    for (size_t i = 0; i < calificaciones.size(); i++) 
    {
        cout << calificaciones[i] << " ";
    }
    cout << endl;
}
void calcularPorcentajes(const vector<int>& calificaciones) 
{
    int reprobados = 0, regulares = 0, buenos = 0, excelentes = 0;
    int total = calificaciones.size();
    for (size_t i = 0; i < calificaciones.size(); i++) 
    {
        int c = calificaciones[i];
        if (c <= 59) 
        {
            reprobados++;
        }
        else if (c <= 79) 
        {
            regulares++;
        }
        else if (c <= 89) 
        {
            buenos++;
        }
        else 
        {
            excelentes++;
        }
    }
    cout << "Reprobados: " << (reprobados * 100.0) / total << "%" << endl;
    cout << "Regulares: " << (regulares * 100.0) / total << "%" << endl;
    cout << "Buenos: " << (buenos * 100.0) / total << "%" << endl;
    cout << "Excelentes: " << (excelentes * 100.0) / total << "%" << endl;
}
int main() 
{
    int n;
    cout << "Ingrese el numero de calificaciones: ";
    cin >> n;
    vector<int> calificaciones;
    llenarCalificaciones(calificaciones, n);
    mostrarCalificaciones(calificaciones);
    calcularPorcentajes(calificaciones);
    return 0;
}
