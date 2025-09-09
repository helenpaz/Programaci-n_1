// Materia: Programacion 1, Paralelo 4
// Autor: Helen Mayra Paz Pariguana
// Carnet: 12608230 L.P.
// Carrera del estudiante: Ingeneria de Sistemas
// Fecha de Creacion: 09/09/25
// Numero de Ejercicio: 1

#include <iostream>
#include <cstdlib>
#include <ctime>
using namespace std;
int main() 
{
    int cLanzamientos;
    cout << "Ingrese la cantidad de lanzamientos: " << endl ;
    cin >> cLanzamientos;
    srand(time(0));
    int contador2 = 0 , contador4 = 0 , contador6 = 0;
    for (int i = 0; i < cLanzamientos; i++) 
    {
        int numAleatorio = rand() % 6 + 1;
        if (numAleatorio == 2) 
        {
            contador2++;
        }
        if (numAleatorio == 4) 
        {
            contador4++;
        }
        if (numAleatorio == 6) 
        {
            contador6++;
        }
    }
    cout << "\nFrecuencia del 2: " << contador2 << endl;
    cout << "Frecuencia del 4: " << contador4 << endl;
    cout << "Frecuencia del 6: " << contador6 << endl;
    return 0;
}
