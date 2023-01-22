#include <iostream>
#include <cmath>
using namespace std;
long factorial(int n);
int main()
{
    cout << "Carlo Enrique Guerra Vega 00052220" << endl;
    int numero_iteraciones = 0;
    double x = 0, resultado_sen = 0;
    // se ingresa el valor de x para sin
    cout << "Para sen(x), ingrese el valor de x: ";
    cin >> x;
    cout << "Ingrese el numero de iteraciones: ";
    cin >> numero_iteraciones;
    // se pide el numero de iteraciones a realizar
    for (int n = 0; n <= numero_iteraciones; n++)
    {
        resultado_sen += (pow(-1, n) * pow(x, (2 * n) + 1)) / (factorial((2 * n) + 1));
        // al usar numeros grandes la pc no soporta la cantidad de caracteres
    }

    cout << "El sen(" << x << ")=" << resultado_sen;
    cout << "\nCarlo Enrique Guerra Vega";
    return 0;
}
long factorial(int n)
{
    int resultado = 1;
    for (int i = 1; i <= n; i++)
    { // se multiplican los numeros de 1 hasta n
        resultado *= i;
    }
    if (n == 0)
    {
        resultado = 1;
    } // si el factorial es 0, la respuesta es 1
    return (resultado);
}