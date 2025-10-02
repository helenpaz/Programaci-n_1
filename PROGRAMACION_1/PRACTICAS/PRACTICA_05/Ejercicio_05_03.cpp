// Materia: Programacion 1, Paralelo 4
// Autor: Helen Mayra Paz Pariguana
// Carnet: 12608230 L.P.
// Carrera del estudiante: Ingeneria de Sistemas
// Fecha de Creacion: 02/10/25
// Numero de Ejercicio: 3

#include <iostream>
#include <cmath> 
using namespace std;
int main() 
{
    int N;
    cout << "Cuantas calificaciones? ";
    cin >> N;
    int calif[100];
    for(int i=0; i<N; i++) 
    {
        cout << "Nota " << i+1 << ": ";
        cin >> calif[i];
    }
    int suma = 0;
    for(int i=0; i<N; i++) 
        suma += calif[i];
        double prom = (double)suma / N;
        cout << "Suma = " << suma << endl;
        cout << "Promedio = " << prom << endl;
        double desv[100];
    for(int i=0; i<N; i++) 
    {
        desv[i] = calif[i] - prom;
        cout << "Desviacion[" << i << "] = " << desv[i] << endl;
    }
    double sumacuad = 0;
    for(int i=0; i<N; i++) sumacuad += pow(desv[i], 2);
    double var = sumacuad / N;
    cout << "Varianza = " << var << endl;
    return 0;
}