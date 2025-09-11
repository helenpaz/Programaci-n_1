// Materia: Programacion 1, Paralelo 4
// Autor: Helen Mayra Paz Pariguana
// Carnet: 12608230 L.P.
// Carrera del estudiante: Ingeneria de Sistemas
// Fecha de Creacion: 11/09/25
// Numero de Ejercicio: 11

#include <iostream>
using namespace std;
int retirarDinero(double saldo, double monto);  
float saldoInicial = 1000;  
int main() 
{
    float cantidad;
    cout << "Saldo disponible: " << saldoInicial << " Bs\n";
    cout << "Ingrese monto a retirar: ";
    cin >> cantidad;
    int resultado = retirarDinero(saldoInicial, cantidad);
    if (resultado == 1) 
    {
        saldoInicial = saldoInicial - cantidad;
        cout << "Retiro exitoso. Nuevo saldo: " << saldoInicial << " Bs\n";
    } 
    else 
    {
        cout << "Retiro invalido\n";
    }

    return 0;
}

int retirarDinero(double saldo, double monto) 
{
    if (monto <= saldo && ((int)monto % 10 == 0)) 
    {
        return 1;
    } 
    else 
    {
        return 0;
    }
}

