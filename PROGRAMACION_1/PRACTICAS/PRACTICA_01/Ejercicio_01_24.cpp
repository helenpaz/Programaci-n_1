// Materia: Programacion 1, Paralelo 4
// Autor: Helen Mayra Paz Pariguana
// Carnet: 12608230 L.P.
// Carrera del estudiante: Ingeneria de Sistemas
// Fecha de Creacion: 04/08/25
// Numero de Ejercicio: 24

#include <iostream>
using namespace std;
int main() 
{
    int opcion;
    do 
    {
        cout << "\n=== MENU PRINCIPAL ===\n";
        cout << " 1. Primera opcion\n";
        cout << " 2. Segunda opcion\n";
        cout << " 3. Tercera opcion\n";
        cout << " 0. Terminar programa\n";
        cout << "Elija una opcion: ";
        cin >> opcion;
        if (opcion == 1) 
        {
            cout << "Has elegido la primera opcion\n";
        }
        else if (opcion == 2)
        {
            cout << "Has elegido la segunda opcion\n";
        }
        else if (opcion == 3) 
        {
            cout << "Has elegido la tercera opcion\n";
        }
        else if (opcion != 0) 
        {
            cout << "Opcion invalida\n";
        }
    } 
    while (opcion != 0);
    cout << "Saliendo del menu...\n";
    return 0;
}
