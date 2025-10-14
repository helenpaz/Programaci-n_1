// Materia: Programacion 1, Paralelo 4
// Autor: Helen Mayra Paz Pariguana
// Carnet: 12608230 L.P.
// Carrera del estudiante: Ingenieria de Sistemas
// Fecha de Creacion: 09/10/25
// Numero de Ejercicio: 4

#include <iostream>
#include <vector>
using namespace std;
int main()
{
    int n;
    cout << "Cuantos numeros va a ingresar: ";
    if(!(cin >> n)) 
        return 0;
    if(n <= 0)
    {
        cout << "No hay numeros\n";
        return 0;
    }
    vector<int> numeros;
    int valor;
    cout << "Ingrese los " << n << " numeros:\n";
    for(int i = 0; i < n; i++)
    {
        cin >> valor;
        numeros.push_back(valor);
    }
    int k;
    cout << "Cuantas posiciones rotar a la derecha (k): ";
    cin >> k;
    if(n > 0)
    {
        k = k % n;
        if(k < 0) k = (k + n) % n;
    }
    if(k != 0)
    {
        vector<int> rotado(n);
        for(int i = 0; i < n; i++)
        {
            int nuevaPos = (i + k) % n;
            rotado[nuevaPos] = numeros[i];
        }
        numeros = rotado;
    }
    cout << "Vector rotado: ";
    for(int i = 0; i < n; i++) 
    {
        cout << numeros[i] << " ";
    }
    cout << endl;
    return 0;
}
