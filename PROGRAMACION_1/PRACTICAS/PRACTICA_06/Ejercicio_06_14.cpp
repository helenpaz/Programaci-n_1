// Materia: Programacion 1, Paralelo 4
// Autor: Helen Mayra Paz Pariguana
// Carnet: 12608230 L.P.
// Carrera del estudiante: Ingenieria de Sistemas
// Fecha de Creacion: 09/10/25
// Numero de Ejercicio: 14

#include <iostream>
#include <conio.h>
#include <string.h>
using namespace std;
int main()
{
    char frase[30];
    int vocal_a = 0, vocal_e = 0, vocal_i = 0, vocal_o = 0, vocal_u = 0;
    cout << "Digite una frase: ";
    cin.getline(frase, 30, '\n');
    for(int i = 0; i < 30; i++)
    {
        switch(frase[i])
        {
            case 'a': vocal_a++; break;
            case 'e': vocal_e++; break;
            case 'i': vocal_i++; break;
            case 'o': vocal_o++; break;
            case 'u': vocal_u++; break;
        }
    }
    cout << "Vocal a: " << vocal_a << endl;
    cout << "Vocal e: " << vocal_e << endl;
    cout << "Vocal i: " << vocal_i << endl;
    cout << "Vocal o: " << vocal_o << endl;
    cout << "Vocal u: " << vocal_u << endl;
    getch();
    return 0;
}