// Materia: Programacion 1, Paralelo 4
// Autor: Helen Mayra Paz Pariguana
// Carnet: 12608230 L.P.
// Carrera del estudiante: Ingeneria de Sistemas
// Fecha de Creacion: 17/09/25
// Numero de Ejercicio: 4

#include <iostream>
using namespace std;
float ConvertirCelAFahrenheit(int celsius);
int MayorTemperatura(int t1, int t2);
int main() 
{
    int c, temp1, temp2;
    cout << "Ingrese temperatura en Celsius: ";
    cin >> c;
    cout << "En Fahrenheit: " << ConvertirCelAFahrenheit(c) << endl;
    cout << "Ingrese dos temperaturas: ";
    cin >> temp1 >> temp2;
    cout << "La mayor temperatura es: " << MayorTemperatura(temp1, temp2) << endl;
    return 0;
}

float ConvertirCelAFahrenheit(int celsius) 
{
    float f;
    f = (celsius * 9.0 / 5.0) + 32;
    return f;
}

int MayorTemperatura(int t1, int t2) 
{
    if (t1 > t2)
    {
        return t1;
    }
    else
    {
        return t2;
    }
}

