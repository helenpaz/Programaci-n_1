// Materia: Programacion 1, Paralelo 4
// Autor: Helen Mayra Paz Pariguana
// Carnet: 12608230 L.P.
// Carrera del estudiante: Ingeneria de Sistemas
// Fecha de Creacion: 09/09/25
// Numero de Ejercicio: 2

#include <iostream>
#include <cstdlib>
#include <ctime>
using namespace std;
int main() 
{
    int cLanzamientos;
    cout << "Ingrese la cantidad de lanzamientos de la moneda: " << endl ;
    cin >> cLanzamientos;
    srand(time(0));
    int cCaras = 0 , cCruces = 0;
    for (int i = 0; i < cLanzamientos; i++) 
    {
        int resultMoneda = rand() % 2; 
        if (resultMoneda == 0) 
        {
            cCaras++;
        }
        else 
        {
            cCruces++;
        }
    }
    cout << "\nCaras: " << cCaras << " (" << (cCaras * 100.0 / cLanzamientos) << "%)" << endl;
    cout << "Cruces: " << cCruces << " (" << (cCruces * 100.0 / cLanzamientos) << "%)" << endl;
    return 0;
}
