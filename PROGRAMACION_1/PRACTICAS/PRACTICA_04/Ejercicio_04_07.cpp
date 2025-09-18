// Materia: Programacion 1, Paralelo 4
// Autor: Helen Mayra Paz Pariguana
// Carnet: 12608230 L.P.
// Carrera del estudiante: Ingeneria de Sistemas
// Fecha de Creacion: 17/09/25
// Numero de Ejercicio: 7

#include <iostream>
using namespace std;
int MCD(int a, int b);
int MCM(int a, int b);
int main() 
{
    int num1, num2;
    cout << "Ingrese el 1er numero: ";
    cin >> num1 ;
    cout << "Ingrese el 2do numero: ";
    cin >> num2 ;
    cout << "MCD = " << MCD(num1 , num2) << endl;
    cout << "MCM = " << MCM(num1 , num2) << endl;
    return 0;
}

int MCD(int a, int b) 
{
    int r;
    while (b != 0) 
    {
        r = a % b;
        a = b;
        b = r;
    }
    return a;
}

int MCM(int a, int b) 
{
    return (a * b) / MCD(a, b);
}
