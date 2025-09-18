// Materia: Programacion 1, Paralelo 4
// Autor: Helen Mayra Paz Pariguana
// Carnet: 12608230 L.P.
// Carrera del estudiante: Ingeneria de Sistemas
// Fecha de Creacion: 17/09/25
// Numero de Ejercicio: 6

#include <iostream>
using namespace std;
int Primo(int n);
int main() 
{
    int num, suma = 0;
    cout << "Ingrese un numero: ";
    cin >> num;
    int temp = num;
    while (temp > 0) 
    {
        suma = suma + (temp % 10);
        temp = temp / 10;
    }
    cout << "Suma de digitos: " << suma << endl;
    if (Primo(suma) == 1)
    {
        cout << "La suma es primo" << endl;
    }
    else
    {
        cout << "La suma no es primo" << endl;
    }
    return 0;
}

int Primo(int numero) 
{
    if (numero <= 1) 
    {
        return 0;
    }
    for (int i = 2; i <= numero / 2; i++) 
    {
        if (numero % i == 0) 
        {
            return 0;
        }
    }
    return 1;
}
