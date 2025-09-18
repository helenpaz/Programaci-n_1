// Materia: Programacion 1, Paralelo 4
// Autor: Helen Mayra Paz Pariguana
// Carnet: 12608230 L.P.
// Carrera del estudiante: Ingeneria de Sistemas
// Fecha de Creacion: 17/09/25
// Numero de Ejercicio: 2

#include <iostream>
using namespace std;
int CalcVolumen(int radio, int altura = 10);
int main() 
{
    int radioo;
    cout << "Ingrese el radio: ";
    cin >> radioo;
    cout << "Volumen del cilindro: " << CalcVolumen(radioo) << endl;
    return 0;
}

int CalcVolumen(int radio, int altura) 
{
    const float PI = 3.1416;  
    int volumen;
    volumen = (int)(PI * radio * radio * altura); 
    return volumen;
}
