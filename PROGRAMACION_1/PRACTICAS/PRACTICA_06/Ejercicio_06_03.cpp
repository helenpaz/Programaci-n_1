// Materia: Programacion 1, Paralelo 4
// Autor: Helen Mayra Paz Pariguana
// Carnet: 12608230 L.P.
// Carrera del estudiante: Ingenieria de Sistemas
// Fecha de Creacion: 09/10/25
// Numero de Ejercicio: 3

#include <iostream>
#include <vector>
#include <string>
#include <cstdlib>
#include <ctime>
using namespace std;
// Mostrando datos al azar
int main()
{
    srand(time(0));
    vector<string> nombre;
    vector<string> apellido;
    vector<int> edad;
    nombre.push_back("Ana");
    nombre.push_back("Luis");
    nombre.push_back("Mia");
    nombre.push_back("Carlos");
    nombre.push_back("Sara");
    nombre.push_back("Juan");
    nombre.push_back("Leo");
    nombre.push_back("Luz");
    nombre.push_back("Paz");
    nombre.push_back("Eva");
    apellido.push_back("Perez");
    apellido.push_back("Rojas");
    apellido.push_back("Diaz");
    apellido.push_back("Lopez");
    apellido.push_back("Vera");
    apellido.push_back("Soto");
    apellido.push_back("Mora");
    apellido.push_back("Reyes");
    apellido.push_back("Guzman");
    apellido.push_back("Nina");
    edad.push_back(20);
    edad.push_back(21);
    edad.push_back(22);
    edad.push_back(23);
    edad.push_back(24);
    edad.push_back(25);
    edad.push_back(26);
    edad.push_back(27);
    edad.push_back(28);
    edad.push_back(29);
    int veces;
    cout << "Cuantas veces mostrar: ";
    cin >> veces;
    for(int i = 0; i < veces; i++)
    {
        int r = rand() % 10; 
        cout << nombre[r] << " " << apellido[r] << " " << edad[r] << endl;
    }
    return 0;
}
