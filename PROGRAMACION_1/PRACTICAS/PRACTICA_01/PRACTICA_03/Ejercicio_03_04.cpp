// Materia: Programacion 1, Paralelo 4
// Autor: Helen Mayra Paz Pariguana
// Carnet: 12608230 L.P.
// Carrera del estudiante: Ingeneria de Sistemas
// Fecha de Creacion: 11/09/25
// Numero de Ejercicio: 4

#include <iostream>
using namespace std;
float calcularIMC(float peso, float altura);  
float imc;  
int main() 
{
    float p, a;
    cout << "Ingrese su peso en (kg): ";
    cin >> p;
    cout << "Ingrese su altura en (m): ";
    cin >> a;
    imc = calcularIMC(p, a);
    cout << "Su IMC es: " << imc << endl;
    return 0;
}

float calcularIMC(float peso, float altura) 
{
    float resultado;
    resultado = peso / (altura * altura);
    return resultado;
}
