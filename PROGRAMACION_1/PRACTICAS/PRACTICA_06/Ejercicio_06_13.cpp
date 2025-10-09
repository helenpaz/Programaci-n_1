// Materia: Programacion 1, Paralelo 4
// Autor: Helen Mayra Paz Pariguana
// Carnet: 12608230 L.P.
// Carrera del estudiante: Ingenieria de Sistemas
// Fecha de Creacion: 09/10/25
// Numero de Ejercicio: 13

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
bool esLetraMinuscula(char c) 
{
    return c >= 'a' && c <= 'z';
}
bool esLetraMayuscula(char c) 
{
    return c >= 'A' && c <= 'Z';
}
bool esLetra(char c) 
{
    return esLetraMinuscula(c) || esLetraMayuscula(c);
}
void ponerMayusculas(string &cadena) 
{
    bool nuevaPalabra = true;
    for (int i = 0; cadena[i] != '\0'; i++) 
    {
        char c = cadena[i];
        if (c == ' ') 
        {
            nuevaPalabra = true;
        } 
        else if (nuevaPalabra && esLetraMinuscula(c)) 
        {
            cadena[i] = c - 32;
            nuevaPalabra = false;
        } 
        else 
        {
            nuevaPalabra = false;
        }
    }
}
int main() 
{
    string cadena;
    cout << "Ingrese una cadena: " << endl;
    leerCadena(cadena);
    ponerMayusculas(cadena);
    cout << cadena << endl;
    return 0;
}
