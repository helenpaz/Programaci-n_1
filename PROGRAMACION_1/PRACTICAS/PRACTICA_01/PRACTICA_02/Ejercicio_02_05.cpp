// Materia: Programacion 1, Paralelo 4
// Autor: Helen Mayra Paz Pariguana
// Carnet: 12608230 L.P.
// Carrera del estudiante: Ingeneria de Sistemas
// Fecha de Creacion: 09/09/25
// Numero de Ejercicio: 5

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
    int numGenerado , sumaTotal = 0 , numMayor = 0;
    int numMenor = 101; 
    for (int contador = 0; contador < cNumeros; contador++) 
    {
        numGenerado = rand() % 100 + 1; 
        cout << numGenerado << " ";
        sumaTotal = sumaTotal + numGenerado;
        if (numGenerado > numMayor) 
        {
            numMayor = numGenerado;
        }
        if (numGenerado < numMenor) 
        {
            numMenor = numGenerado;
        }
    }
    float promedio = (float)sumaTotal / cNumeros; 
    cout << "\nSuma total: " << sumaTotal << endl;
    cout << "Promedio: " << promedio << endl;
    cout << "Mayor: " << numMayor << endl;
    cout << "Menor: " << numMenor << endl;
    return 0;
}

