// Materia: Programacion 1, Paralelo 4
// Autor: Helen Mayra Paz Pariguana
// Carnet: 12608230 L.P.
// Carrera del estudiante: Ingenieria de Sistemas
// Fecha de Creacion: 07/11/25
// Numero de Ejercicio: 7
#include <iostream>
using namespace std;
int eliminarDuplicados(int v[], int n);
int main()
{
    int n, v[100];
    cout << "Cantidad de elementos: ";
    cin >> n;
    for(int i=0;i<n;i++)
    {
        cout << "Elemento " << i+1 << ": ";
        cin >> v[i];
    }
    n = eliminarDuplicados(v, n);
    cout << "Vector sin duplicados: ";
    for(int i=0;i<n;i++)
        cout << v[i] << " ";
    cout << endl;
}
int eliminarDuplicados(int v[], int n)
{
    int nuevo[100], k=0;
    for(int i=0;i<n;i++)
    {
        bool repetido=false;
        for(int j=0;j<k;j++)
            if(v[i]==nuevo[j]) 
            {
                repetido=true;
            }
        if(!repetido)
            nuevo[k++]=v[i];
    }
    for(int i=0;i<k;i++) v[i]=nuevo[i];
    return k;
}
