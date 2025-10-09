// Materia: Programacion 1, Paralelo 4
// Autor: Helen Mayra Paz Pariguana
// Carnet: 12608230 L.P.
// Carrera del estudiante: Ingenieria de Sistemas
// Fecha de Creacion: 09/10/25
// Numero de Ejercicio: 11

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
void dividirTokens(const string &cadena, char delimitador) 
{
    string token = "";
    for (int i = 0; cadena[i] != '\0'; i++) 
    {
        if (cadena[i] == delimitador) 
        {
            if (token != "") 
            {
                cout << token << endl;
                token = "";
            }
        } 
        else 
        {
            token += cadena[i];
        }
    }
    if (token != "") 
    {
        cout << token << endl;
    }
}
int main() 
{
    string cadena;
    char delimitador;
    cout << "Ingrese la cadena: " << endl;
    leerCadena(cadena);
    cout << "Ingrese el delimitador: " << endl;
    cin >> delimitador;
    dividirTokens(cadena, delimitador);
    return 0;
}
