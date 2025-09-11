// Materia: Programacion 1, Paralelo 4
// Autor: Helen Mayra Paz Pariguana
// Carnet: 12608230 L.P.
// Carrera del estudiante: Ingeneria de Sistemas
// Fecha de Creacion: 11/09/25
// Numero de Ejercicio: 9

#include <iostream>
using namespace std;
float calcularSalario(int minutos);  
float salario;
int main() 
{
    int m;
    cout << "Ingrese minutos trabajados: ";
    cin >> m;
    salario = calcularSalario(m);
    cout << "Salario ganado: " << salario << " Bs\n";
    return 0;
}

float calcularSalario(int minutos) 
{
    float salarioPorMinuto = 8.0 / 60; 
    float total;
    total = minutos * salarioPorMinuto;
    return total;
}
