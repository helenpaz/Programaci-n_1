// Materia: Programacion 1, Paralelo 4
// Autor: Helen Mayra Paz Pariguana
// Carnet: 12608230 L.P.
// Carrera del estudiante: Ingeneria de Sistemas
// Fecha de Creacion: 09/09/25
// Numero de Ejercicio: 4

#include <iostream>
#include <cstdlib>
#include <ctime>
using namespace std;
int main() 
{
    srand(time(0));
    int numSecreto = rand() % 51; 
    int intentoUsuario , cIntentos = 0;
    cout << "Ingresa un numero entre 0 y 50" << endl;
    while (cIntentos < 5) 
    {
        cout << "Intento " << cIntentos + 1 << ": ";
        cin >> intentoUsuario;
        cIntentos++;
        if (intentoUsuario == numSecreto) 
        {
            cout << "¡Felicitaciones, adivinaste el numero!" << endl;
            return 0;
        } 
        else if (intentoUsuario < numSecreto) 
        {
            cout << "El numero secreto es mayor" << endl;
        } 
        else 
        {
            cout << "El numero secreto es menor" << endl;
        }
    }
    cout << "Perdiste, el numero era: " << numSecreto << endl;
    return 0;
}
