// Materia: Programacion 1, Paralelo 4
// Autor: Helen Mayra Paz Pariguana
// Carnet: 12608230 L.P.
// Carrera del estudiante: Ingenieria de Sistemas
// Fecha de Creacion: 07/11/25
// Numero de Ejercicio: 1
#include <iostream>
#include <cmath>
using namespace std;
void leerDatos(int c[], int n);
float suma(int c[], int n);
float promedio(int c[], int n);
void desviaciones(int c[], float d[], int n, float prom);
float varianza(float d[], int n);
int main() 
{
    int n;
    cout << "Ingrese la cantidad de calificaciones: ";
    cin >> n;
    int cal[100];
    float des[100];
    leerDatos(cal, n);
    float s = suma(cal, n);
    float prom = promedio(cal, n);
    desviaciones(cal, des, n, prom);
    float var = varianza(des, n);
    cout << "\nSuma total: " << s;
    cout << "\nPromedio: " << prom << endl;
    cout << "\nCalificacion  Desviacion\n";
    for(int i=0; i<n; i++)
    {
        cout << cal[i] << "\t\t" << des[i] << endl;
    }
    cout << "\nVarianza: " << var << endl;
    return 0;
}
void leerDatos(int c[], int n)
{
    for(int i=0; i<n; i++)
    {
        cout << "Ingrese calificacion " << i+1 << ": ";
        cin >> c[i];
    }
}
float suma(int c[], int n)
{
    float s = 0;
    for(int i=0; i<n; i++) s += c[i];
    return s;
}
float promedio(int c[], int n)
{
    return suma(c, n) / n;
}
void desviaciones(int c[], float d[], int n, float prom)
{
    for(int i=0; i<n; i++)
        d[i] = c[i] - prom;
}
float varianza(float d[], int n)
{
    float s = 0;
    for(int i=0; i<n; i++)
        s += pow(d[i], 2);
    return s / n;
}
