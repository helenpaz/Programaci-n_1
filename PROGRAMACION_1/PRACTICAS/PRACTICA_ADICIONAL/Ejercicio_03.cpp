// Materia: Programacion 1, Paralelo 4
// Autor: Helen Mayra Paz Pariguana
// Carnet: 12608230 L.P.
// Carrera del estudiante: Ingenieria de Sistemas
// Fecha de Creacion: 07/11/25
// Numero de Ejercicio: 3
#include <iostream>
using namespace std;
bool esPrimo(int n);
int sumaDigitos(int n);
int main()
{
    int v[100], n=0, x;
    cout << "Ingrese numeros (negativo para terminar):\n";
    while(true)
    {
        cin >> x;
        if(x < 0) 
        {
            break;
        }
        v[n++] = x;
    }
    int sumaPares = 0, sumaPrimos = 0, sumaDig = 0;
    cout << "\nVector: ";
    for(int i=0; i<n; i++)
    {
        cout << v[i] << " ";
        if(v[i]%2==0)
        {
            sumaPares += v[i];
        }
        if(esPrimo(v[i])) 
        {
            sumaPrimos += v[i];
        }
        sumaDig += sumaDigitos(v[i]);
    }
    cout << "\nSuma pares: " << sumaPares;
    cout << "\nSuma primos: " << sumaPrimos;
    cout << "\nSuma de digitos: " << sumaDig << endl;
    return 0;
}
bool esPrimo(int n)
{
    if(n < 2) 
    {
        return false;
    }
    for(int i=2; i*i<=n; i++)
        if(n % i == 0) 
        {
            return false;
        }
    return true;
}

int sumaDigitos(int n)
{
    int s = 0;
    while(n > 0)
    {
        s += n % 10;
        n /= 10;
    }
    return s;
}
