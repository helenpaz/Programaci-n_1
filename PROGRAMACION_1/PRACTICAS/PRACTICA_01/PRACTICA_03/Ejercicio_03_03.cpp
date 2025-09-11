// Materia: Programacion 1, Paralelo 4
// Autor: Helen Mayra Paz Pariguana
// Carnet: 12608230 L.P.
// Carrera del estudiante: Ingeneria de Sistemas
// Fecha de Creacion: 11/09/25
// Numero de Ejercicio: 3

#include <iostream>
using namespace std;
int Capicua(int numero);  
int resultado;  
int main() 
{
    int num;
    cout << "Ingrese un numero: ";
    cin >> num;
    resultado = Capicua(num);
    cout << "Resultado (1 = Es capicua, 0 = No es capicua): " << resultado << endl;
    return 0;
}

int Capicua(int numero) 
{
    int original = numero;
    int inverso = 0, digito;
    while (numero != 0) 
    {
        digito = numero % 10;
        inverso = inverso * 10 + digito;
        numero /= 10;
    }
    if (original == inverso)
        return 1;
    else
        return 0;
}
