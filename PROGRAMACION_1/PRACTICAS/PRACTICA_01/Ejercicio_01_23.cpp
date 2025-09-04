// Materia: Programacion 1, Paralelo 4
// Autor: Helen Mayra Paz Pariguana
// Carnet: 12608230 L.P.
// Carrera del estudiante: Ingeneria de Sistemas
// Fecha de Creacion: 04/08/25
// Numero de Ejercicio: 23

#include <iostream>
using namespace std;
int main() 
{
    int numero, resultado;
    cout << "Ingrese un numero: "<< endl ;
    cin >> numero;
    cout << "El numero " << numero << " al reves es: " ;
    while (numero > 0) 
    {
        resultado = numero % 10;
        cout << resultado;
        numero = numero / 10;
    }
    return 0;
}
