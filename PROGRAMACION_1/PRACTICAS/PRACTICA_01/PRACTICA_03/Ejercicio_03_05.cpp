// Materia: Programacion 1, Paralelo 4
// Autor: Helen Mayra Paz Pariguana
// Carnet: 12608230 L.P.
// Carrera del estudiante: Ingeneria de Sistemas
// Fecha de Creacion: 11/09/25
// Numero de Ejercicio: 5

#include <iostream>
using namespace std;
float promPonderado(int n1, int n2, int n3, int n4); 
float promedio;
int main() 
{
    int a, b, c, d;
    cout << "Ingrese 4 notas: ";
    cin >> a >> b >> c >> d;
    promedio = promPonderado(a, b, c, d);
    cout << "El promedio ponderado es: " << promedio << endl;
    return 0;
}

float promPonderado(int n1, int n2, int n3, int n4) 
{
    int p1 = 10, p2 = 20, p3 = 30, p4 = 40;
    int sumaPesos = p1 + p2 + p3 + p4;
    float suma = n1 * p1 + n2 * p2 + n3 * p3 + n4 * p4;
    return suma / sumaPesos;
}
