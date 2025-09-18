// Materia: Programacion 1, Paralelo 4
// Autor: Helen Mayra Paz Pariguana
// Carnet: 12608230 L.P.
// Carrera del estudiante: Ingeneria de Sistemas
// Fecha de Creacion: 17/09/25
// Numero de Ejercicio: 3

#include <iostream>
using namespace std;
void ModificarVal(int valor, int &referencia);
int main() 
{
    int a, b;
    cout << "Ingrese el 1er valor: ";
    cin >> a;
    cout << "Ingrese el 2do valor: ";
    cin >> b;
    cout << "Antes -> a: " << a << ", b: " << b << endl;
    ModificarVal(a, b);
    cout << "Despues -> a: " << a << ", b: " << b << endl;
    return 0;
}

void ModificarVal(int valor, int &referencia) 
{
    valor = valor * 2;
    referencia = referencia + 10;
    cout << "Valor (valor *2): " << valor << endl;
    cout << "Valor (referencia +10): " << referencia << endl;
}

