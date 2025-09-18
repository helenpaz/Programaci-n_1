// Materia: Programacion 1, Paralelo 4
// Autor: Helen Mayra Paz Pariguana
// Carnet: 12608230 L.P.
// Carrera del estudiante: Ingeneria de Sistemas
// Fecha de Creacion: 17/09/25
// Numero de Ejercicio: 9

#include <iostream>
using namespace std;
int CalcularSueldo(int ventas, int antiguedad);
int main() 
{
    int n;
    cout << "Ingrese cantidad de vendedoras: ";
    cin >> n;
    for (int i = 1; i <= n; i++) 
    {
        int antiguedad, ventas;
        cout << "\nVendedora " << i << endl;
        cout << "Antiguedad (anios): ";
        cin >> antiguedad;
        cout << "Cantidad de productos vendidos: ";
        cin >> ventas;
        int sueldo = CalcularSueldo(ventas, antiguedad);
        cout << "Sueldo de la vendedora " << i << ": " << sueldo << " Bs" << endl;
    }
    return 0;
}

int CalcularSueldo(int ventas, int antiguedad) 
{
    int basico = 1000 + (antiguedad * 100);
    int totalVentas = ventas * 50; 
    int comision = totalVentas * 10 / 100;
    int sueldo = basico + comision;
    return sueldo;
}
