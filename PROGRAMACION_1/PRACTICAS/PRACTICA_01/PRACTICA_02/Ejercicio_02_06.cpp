// Materia: Programacion 1, Paralelo 4
// Autor: Helen Mayra Paz Pariguana
// Carnet: 12608230 L.P.
// Carrera del estudiante: Ingeneria de Sistemas
// Fecha de Creacion: 09/09/25
// Numero de Ejercicio: 6

#include <iostream>
#include <cstdlib>
#include <ctime>
using namespace std;
int main() 
{
    int cNumeros;
    cout << "Cantidad de numeros aleatorios: ";
    cin >> cNumeros;
    srand(time(0)); 
    int numGenerado , cPrimos = 0;
    for (int i = 0; i < cNumeros; i++) 
    {
        numGenerado = rand() % 100 + 1;
        cout << numGenerado << " ";
        int divisores = 0;
        for (int j = 1; j <= numGenerado; j++) 
        {
            if (numGenerado % j == 0) 
            {
                divisores++;
            }
        }
        if (divisores == 2) 
        {
            cPrimos++;
        }
    }
    cout << "\nCantidad de numeros primos: " << cPrimos << endl;
    return 0;
}
