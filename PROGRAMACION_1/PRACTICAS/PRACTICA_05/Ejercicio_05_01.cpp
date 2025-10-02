// Materia: Programacion 1, Paralelo 4
// Autor: Helen Mayra Paz Pariguana
// Carnet: 12608230 L.P.
// Carrera del estudiante: Ingeneria de Sistemas
// Fecha de Creacion: 02/10/25
// Numero de Ejercicio: 1

#include <iostream>
#include <cstdlib>
#include <ctime>    
using namespace std;
void voltajes(double v[100]) 
{
    for(int i=0; i<100; i++) 
    {
        v[i] = 20 + rand() % 201; 
    }
}

void temperaturas(double t[50]) 
{
    for(int i=0; i<50; i++) 
    {
        t[i] = rand() % 101; 
    }
}

void caracteres(char c[30]) 
{
    for(int i=0; i<30; i++) 
    {
        c[i] = 'A' + rand() % 26; 
    }
}

void anios(int a[100]) 
{
    for(int i=0; i<100; i++) 
    {
        a[i] = 1990 + rand() % (2025 - 1990 + 1);
    }
}

void velocidades(double v[32]) 
{
    for(int i=0; i<32; i++) 
    {
        v[i] = 10 + rand() % 291;
    }
}

void distancias(double d[1000]) 
{
    for(int i=0; i<1000; i++) 
    {
        d[i] = 1 + rand() % 1000;
    }
}

int main() 
{
    srand(time(0));
    double v[100], t[50], vel[32], dis[1000];
    char c[30];
    int a[100];
    voltajes(v);
    temperaturas(t);
    caracteres(c);
    anios(a);
    velocidades(vel);
    distancias(dis);
    cout << "Voltajes: ";
    for(int i=0; i<5; i++) 
        cout << v[i] << " ";
    cout << endl;
    cout << "Temperaturas: ";
    for(int i=0; i<5; i++) 
        cout << t[i] << " ";
    cout << endl;
    cout << "Caracteres: ";
    for(int i=0; i<5; i++) 
        cout << c[i] << " ";
    cout << endl;
    cout << "Anios: ";
    for(int i=0; i<5; i++) 
        cout << a[i] << " ";
    cout << endl;
    cout << "Velocidades: ";
    for(int i=0; i<5; i++) 
        cout << vel[i] << " ";
    cout << endl;
    cout << "Distancias: ";
    for(int i=0; i<5; i++) 
        cout << dis[i] << " ";
    cout << endl;
    return 0;
}