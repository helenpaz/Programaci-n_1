// Materia: Programacion 1, Paralelo 4
// Autor: Helen Mayra Paz Pariguana
// Carnet: 12608230 L.P.
// Carrera del estudiante: Ingeneria de Sistemas
// Fecha de Creacion: 17/09/25
// Numero de Ejercicio: 5

#include <iostream>
using namespace std;
int CalcSalario(int horas, int tarifa);
int main() 
{
    int horas, tarifa;
    cout << "Ingrese horas trabajadas: ";
    cin >> horas;
    cout << "Ingrese tarifa por hora: ";
    cin >> tarifa;
    int salario;
    salario = CalcSalario(horas, tarifa);
    if (horas <= 8) 
    {
        cout << "Salario del trabajador: " << salario << endl;
        cout << "Salario bonificacion: 0" << endl;
        cout << "Total: " << salario << endl;
    } 
    else 
    {
        int salarioNormal = 8 * tarifa;
        int bonificacion = (horas - 8) * tarifa * 2;
        cout << "Salario del trabajador: " << salarioNormal << endl;
        cout << "Salario bonificacion: " << bonificacion << endl;
        cout << "Total: " << salario << endl;
    }
    return 0;
}

int CalcSalario(int horas, int tarifa) 
{
    int salario;
    if (horas <= 8) 
    {
        salario = horas * tarifa;
    } 
    else 
    {
        int extras = horas - 8;
        salario = (8 * tarifa) + (extras * tarifa * 2);
    }
    return salario;
}

