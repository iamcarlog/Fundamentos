#include <iostream>
using namespace std;

int main()
{
    int numero[100], n, mayor = 0;
    cout << "Digite el numero de elementos del arreglo: ";
    cin >> n;
    for (int i = 0; i < n; i++)
    {
        cin >> numero[i];
    }
    for (int i = 0; i < n; i++)
    {
        if (numero[i] > mayor)
        {
            mayor = numero[i];
        }
    }
    cout << "El mayor numero es: " << mayor;
    return 0;
}