// Materia: Programacion 1, Paralelo 4
// Autor: Helen Mayra Paz Pariguana
// Carnet: 12608230 L.P.
// Carrera del estudiante: Ingeneria de Sistemas
// Fecha de Creacion: 17/09/25
// Numero de Ejercicio: 8

#include <iostream>
#include <cstdlib>
#include <ctime>
using namespace std;
int calcularTotal(int numProductos) 
{
    int total = 0;
    for (int i = 0; i < numProductos; i++) 
    {
        int precio = 20 + rand() % 31;
        total += precio;
        cout << "Producto " << i + 1 << ": " << precio << " Bs" << endl;
    }
    return total;
}

int calcularIVA(int total) 
{
    return total * 13 / 100;
}

int aplicarDescuento(int monto) 
{
    if (monto > 2500) 
    {
        int descuento = monto * 5 / 100;
        cout << "Descuento aplicado (5%): " << descuento << " Bs" << endl;
        return monto - descuento;
    }
    return monto;
}

int main() 
{
    srand(time(0));
    int num1;
    cout << "Ingrese cantidad de productos vendidos: ";
    cin >> num1;
    int total1 = calcularTotal(num1);
    int iva1 = calcularIVA(total1);
    int total2 = total1 + iva1;
    cout << "Suma total de ventas (sin IVA): " << total1 << " Bs" << endl;
    cout << "IVA (13%): " << iva1 << " Bs" << endl;
    total2 = aplicarDescuento(total2);
    cout << "Monto total con IVA y descuentos: " << total2 << " Bs" << endl;
    return 0;
}


