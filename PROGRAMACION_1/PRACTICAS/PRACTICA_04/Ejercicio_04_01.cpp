// Materia: Programacion 1, Paralelo 4
// Autor: Helen Mayra Paz Pariguana
// Carnet: 12608230 L.P.
// Carrera del estudiante: Ingeneria de Sistemas
// Fecha de Creacion: 17/09/25
// Numero de Ejercicio: 1

#include <iostream>
using namespace std;
void IntercambiarVal(int &a, int &b);
int main() 
{
    int x, y;
    cout << "Ingrese el 1er valor: ";
    cin >> x;
    cout << "Ingrese el 2do valor: ";
    cin >> y;
    cout << "Antes: x = " << x << ", y = " << y << endl;
    IntercambiarVal(x, y);
    cout << "Despues: x = " << x << ", y = " << y << endl;
    return 0;
}

void IntercambiarVal(int &a, int &b) 
{
    int aux;
    aux = a;
    a = b;
    b = aux;
}

