// Materia: Programacion 1, Paralelo 4
// Autor: Helen Mayra Paz Pariguana
// Carnet: 12608230 L.P.
// Carrera del estudiante: Ingenieria de Sistemas
// Fecha de Creacion: 23/10/25
// Numero de Ejercicio: 1

#include <iostream>
using namespace std;
int sumaDigitos(int num) 
{
    if (num == 0)
    {
        return 0;
    }
    return (num % 10) + sumaDigitos(num / 10);
}
int main() 
{
    int numero;
    cout << "Ingrese un numero entero positivo: ";
    cin >> numero;
    cout << "La suma de los digitos es: " << sumaDigitos(numero) << endl;
    return 0;
}