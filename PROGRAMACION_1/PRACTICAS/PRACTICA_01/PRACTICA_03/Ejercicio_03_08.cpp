// Materia: Programacion 1, Paralelo 4
// Autor: Helen Mayra Paz Pariguana
// Carnet: 12608230 L.P.
// Carrera del estudiante: Ingeneria de Sistemas
// Fecha de Creacion: 11/09/25
// Numero de Ejercicio: 8

#include <iostream>
using namespace std;
int b200, b100, b50, b20, b10;  
int m5, m2, m1;   
int descomponer(int monto); 
int main() 
{
    int cantidad;
    cout << "Ingrese el monto a descomponer: ";
    cin >> cantidad;
    descomponer(cantidad);
    cout << "Billetes de 200 Bs: " << b200 << endl;
    cout << "Billetes de 100 Bs: " << b100 << endl;
    cout << "Billetes de 50 Bs: " << b50 << endl;
    cout << "Billetes de 20 Bs: " << b20 << endl;
    cout << "Billetes de 10 Bs: " << b10 << endl;
    cout << "Monedas de 5 Bs: " << m5 << endl;
    cout << "Monedas de 2 Bs: " << m2 << endl;
    cout << "Monedas de 1 Bs: " << m1 << endl;
    return 0;
}

int descomponer(int monto) 
{
    b200 = monto / 200;
    monto = monto % 200;
    b100 = monto / 100;
    monto = monto % 100;
    b50 = monto / 50;
    monto = monto % 50;
    b20 = monto / 20;
    monto = monto % 20;
    b10 = monto / 10;
    monto = monto % 10;
    m5 = monto / 5;
    monto = monto % 5;
    m2 = monto / 2;
    monto = monto % 2;
    m1 = monto / 1;
    monto = monto % 1;
    return 1;  
}

