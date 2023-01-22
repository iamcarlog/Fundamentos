#include <iostream>
using namespace std;

int main()
{
    cout << "Carlo Enrique Guerra Vega 00052220";
    int N, bandera; // se declaran las dos variables a usar
    cout << "\nIngrese el anio que desea saber si es bisiesto o no: ";
    cin >> N;
    if (N % 4 == 0) // si es divisible entre 4, entonces el residuo es 0, por lo tanto
    // si n%4 es 0 el if es verdadero
    {
        if (N % 100 == 0) // si es divisible entre 100, el residuo es 0, por lo tanto si
        // n%100 es 0 el if es verdadero
        {
            if (N % 400 == 0) // lo mismo pero ahora con 400
            {
                bandera = 0; // se usara como el condicional para saber si es bisiesto o no
            }
            else
            {
                bandera = 1;
            }
        }
        else
        {
            bandera = 1;
        }
    }
    else
    {
        bandera = 0;
    }
    if (bandera) // si bandera es 1 el anio es bisiesto
    {
        cout << "El anio es bisiesto.";
    }
    else // en el caso que sea 0 es es normal
    {
        cout << "El anio no es bisiesto";
    }
    cout << "\nCarlo Enrique Guerra Vega";
    return 0;
}