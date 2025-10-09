// Materia: Programacion 1, Paralelo 4
// Autor: Helen Mayra Paz Pariguana
// Carnet: 12608230 L.P.
// Carrera del estudiante: Ingenieria de Sistemas
// Fecha de Creacion: 09/10/25
// Numero de Ejercicio: 8

#include <iostream>
#include <string>
using namespace std;
bool esCorreoValido(const string& correo) 
{
    int arroba = -1;
    int punto = -1;
    for (int i = 0; correo[i] != '\0'; i++) 
    {
        if (correo[i] == '@') 
        {
            if (arroba != -1) 
            {
                return false;
            }
            arroba = i;
        } 
        else if (correo[i] == '.' && arroba != -1 && i > arroba) 
        {
            punto = i;
        }
    }
    return arroba != -1 && punto != -1;
}
int main() 
{
    string correo;
    cout << "Ingrese un correo: ";
    cin >> correo;
    if (esCorreoValido(correo)) 
    {
        cout << "Correo electronico valido" << endl;
    } 
    else 
    {
        cout << "Correo electronico invalido" << endl;
    }
    return 0;
}
