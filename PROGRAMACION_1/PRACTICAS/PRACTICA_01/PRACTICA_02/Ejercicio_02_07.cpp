// Materia: Programacion 1, Paralelo 4
// Autor: Helen Mayra Paz Pariguana
// Carnet: 12608230 L.P.
// Carrera del estudiante: Ingeneria de Sistemas
// Fecha de Creacion: 09/09/25
// Numero de Ejercicio: 7

#include <iostream>
using namespace std;
int main() 
{
    int ninos1, ninos2, ninos3;
    cout << "Ingrese cantidad de niños de 1 año: ";
    cin >> ninos1;
    cout << "Ingrese cantidad de niños de 2 años: ";
    cin >> ninos2;
    cout << "Ingrese cantidad de niños de 3 años: ";
    cin >> ninos3;
    int totalPanales = (ninos1 * 6) + (ninos2 * 3) + (ninos3 * 2);
    cout << "Consumo total de pañales: " << totalPanales << endl;
    return 0;
}
