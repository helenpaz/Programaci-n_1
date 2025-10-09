// Materia: Programacion 1, Paralelo 4
// Autor: Helen Mayra Paz Pariguana
// Carnet: 12608230 L.P.
// Carrera del estudiante: Ingenieria de Sistemas
// Fecha de Creacion: 09/10/25
// Numero de Ejercicio: 10

#include <iostream>
#include <string>
using namespace std;
void leerCadena(string &cadena) 
{
    cadena = "";
    char c;
    while (true) 
    {
        c = cin.get();
        if (c == '\n') 
        {
            break;
        }
        cadena += c;
    }
}
void eliminarDigitos(const string &entrada, string &salida) 
{
    salida = "";
    for (int i = 0; entrada[i] != '\0'; i++) 
    {
        if (entrada[i] < '0' || entrada[i] > '9') 
        {
            salida += entrada[i];
        }
    }
}
int main() {
    string entrada, resultado;
    cout << "Ingrese una cadena" << endl;
    leerCadena(entrada);
    eliminarDigitos(entrada, resultado);
    cout << resultado << endl;
    return 0;
}
