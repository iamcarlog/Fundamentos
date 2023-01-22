#include <iostream>
#include <cmath>
using namespace std;
double factorial(int n);
int main()
{
    int exponente, iteraciones;
    double resultado;
    cout << "Ingrese el valor del exponente para e: "; // se pide el exponente
    cin >> exponente;
    cout << "Mientras mas iteraciones es mas preciso.";
    cout << "Ingrese el numero de iteraciones: "; // se pide el numero de iterciones a realizar
    // mientras mas iteraciones mas preciso
    cin >> iteraciones;

    for (int i = 0; i < iteraciones; i++)
    { // se hace la sumatoria de expresion
        // se hace uso de la recursividad ya que es la sumatoria de todos los terminos desde 0
        //  hasta n
        resultado += ((pow(exponente, i)) / factorial(i));
    }
    cout << "El factorial de e^" << exponente << " es: " << resultado;

    return 0;
}
double factorial(int n)
{
    double resultado; // almacenar la multiplicacion al realizar el factorial
    // es double para que almaecene todos los decmales
    resultado = 1; // se inicia en 1 porque es el elemento identidad de la multiplicacion
    if (n == 0)
    {
        return (1);
    }
    else
    {
        for (int i = 1; i <= n; i++) // se inicia desde 1 hasta n
        {
            resultado *= i; // se multiplican todos los numeros hasta llegar a n
            // ya que factorial es la multiplicacion de todos los antecesores de n  hasta 1
        }
        return (resultado);
    }
}