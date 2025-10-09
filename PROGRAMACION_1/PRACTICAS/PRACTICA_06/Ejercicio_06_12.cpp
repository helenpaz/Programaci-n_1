// Materia: Programacion 1, Paralelo 4
// Autor: Helen Mayra Paz Pariguana
// Carnet: 12608230 L.P.
// Carrera del estudiante: Ingenieria de Sistemas
// Fecha de Creacion: 09/10/25
// Numero de Ejercicio: 12

#include <iostream>
#include <string>
using namespace std;
char aMinuscula(char c) 
{
    if (c >= 'A' && c <= 'Z') 
    {
        return c + 32;
    }
    return c;
}
bool esLetraONumero(char c) 
{
    return (c >= 'a' && c <= 'z') || (c >= '0' && c <= '9');
}
void leerTexto(string &texto) 
{
    texto = "";
    char c;
    while (true) 
    {
        c = cin.get();
        if (c == '\n') 
        {
            break;
        }
        texto += c;
    }
}
bool esPalindromo(const string &texto) 
{
    string limpio = "";
    for (int i = 0; texto[i] != '\0'; i++) 
    {
        char c = aMinuscula(texto[i]);
        if (esLetraONumero(c)) 
        {
            limpio += c;
        }
    }
    int i = 0;
    int j = 0;
    while (limpio[j] != '\0') 
    {
        j++;
    }
    j--;
    while (i < j) 
    {
        if (limpio[i] != limpio[j]) 
        {
            return false;
        }
        i++;
        j--;
    }
    return true;
}
int main() 
{
    string texto;
    cout << "Ingrese un texto: " << endl;
    leerTexto(texto);
    if (esPalindromo(texto)) 
    {
        cout << "Verdadero" << endl;
    } 
    else 
    {
        cout << "Falso" << endl;
    }
    return 0;
}