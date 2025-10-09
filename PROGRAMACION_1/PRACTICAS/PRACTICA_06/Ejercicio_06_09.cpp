// Materia: Programacion 1, Paralelo 4
// Autor: Helen Mayra Paz Pariguana
// Carnet: 12608230 L.P.
// Carrera del estudiante: Ingenieria de Sistemas
// Fecha de Creacion: 09/10/25
// Numero de Ejercicio: 9

#include <iostream>
#include <string>
using namespace std;
void leerOracion(string palabras[], int &n) 
{
    n = 0;
    string palabra = "";
    char c;
    while (true) 
    {
        c = cin.get();
        if (c == '\n') 
        {
            if (palabra != "") 
            {
                palabras[n++] = palabra;
            }
            break;
        }
        if (c == ' ') 
        {
            if (palabra != "") 
            {
                palabras[n++] = palabra;
                palabra = "";
            }
        } 
        else 
        {
            palabra += c;
        }
    }
}
void imprimirInverso(const string palabras[], int n) 
{
    for (int i = n - 1; i >= 0; i--) 
    {
        cout << palabras[i];
        if (i > 0) cout << " ";
    }
    cout << endl;
}
int main() 
{
    string palabras[100];
    int n;
    cout << "Ingrese una oracion: " << endl;
    leerOracion(palabras, n);
    imprimirInverso(palabras, n);
    return 0;
}
