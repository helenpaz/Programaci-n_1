// Materia: Programacion 1, Paralelo 4
// Autor: Helen Mayra Paz Pariguana
// Carnet: 12608230 L.P.
// Carrera del estudiante: Ingeneria de Sistemas
// Fecha de Creacion: 04/09/25
// Numero de Ejercicio: 9 

#include <iostream>
using namespace std;
int main() 
{
    int edad = 0;
    cout << "Ingrese su edad: " << endl;
    cin >> edad;
    if (edad > 0 && edad <= 12)
    {
        cout << "Usted es un niño" << endl;
    }
    else if (edad > 12 && edad <= 18)
    {
        cout << "Usted es adolescente" << endl;
    }
    else if (edad > 18 && edad <= 60)
    {
        cout << "Usted es mayor de edad" << endl;
    }
    else if (edad <= 0)
    {
    	cout << "Edad ivalida" << endl;
	}
    else
    {
        cout << "Usted es adulto mayor" << endl;
    }
    return 0;
}
