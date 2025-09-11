// Materia: Programacion 1, Paralelo 4
// Autor: Helen Mayra Paz Pariguana
// Carnet: 12608230 L.P.
// Carrera del estudiante: Ingeneria de Sistemas
// Fecha de Creacion: 11/09/25
// Numero de Ejercicio: 1

#include <iostream>
using namespace std;
int esPar(int numero);  
int resultado;  
int main() 
{
    int num;
    cout << "Ingrese un numero: ";
    cin >> num;
    resultado = esPar(num);
    cout << "Resultado: (1 = Es par, 0 = Es impar): " << resultado << endl;
    return 0;
}

int esPar(int numero) 
{
    int r;
    if (numero % 2 == 0)
        r = 1;
    else
        r = 0;
    return r;
}

