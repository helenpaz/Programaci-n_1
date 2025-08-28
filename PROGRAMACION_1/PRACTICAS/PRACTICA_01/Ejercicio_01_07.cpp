// Materia: Programacion 1, Paralelo 4
// Autor: Helen Mayra Paz Pariguana
// Carnet: 12608230 L.P.
// Carrera del estudiante: Ingeneria de Sistemas
// Fecha de Creacion: 27/08/25
// Numero de Ejercicio: 7

#include <iostream>
using namespace std;
int main() 
{
    char caracter ;
    cout << "Ingrese un caracter: "<< endl;
    cin >> caracter ;
    if ((caracter >= 'A' && caracter <= 'Z') || (caracter >= 'a' && caracter <= 'z'))
    {
        if (caracter == 'A' || caracter == 'E' || caracter == 'I' || caracter == 'O' || caracter == 'U' || caracter == 'a' || caracter == 'e' || caracter == 'i' || caracter == 'o' || caracter == 'u')
        {
            cout << "Es una vocal" << endl;
        }
        else 
        {
            cout << "Es una consonante" << endl;
        }
    }
    else
    {
        cout << "Es un caracter especial" << endl;
    }
    return 0;
}