// Materia: Programacion 1, Paralelo 4
// Autor: Helen Mayra Paz Pariguana
// Carnet: 12608230 L.P.
// Carrera del estudiante: Ingeneria de Sistemas
// Fecha de Creacion: 04/08/25
// Numero de Ejercicio: 20

#include <iostream>
using namespace std;
int main() 
{
    int numero, digito = 0;
    cout << "Ingrese un numero: " << endl ;
    cin >> numero;
    if (numero == 0) 
    {
        digito = 1;
    }
    while (numero != 0) 
    {
        numero = numero / 10;
        digito++;
    }
    cout << "Cantidad de digitos: " << digito;
    return 0;
}
