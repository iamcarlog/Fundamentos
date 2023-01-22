// media de las notas
#include <iostream>
using namespace std;
double media(double sumatoria_notas, double numero_notas);
int main()
{
    int n;
    double notas[n];
    double sumatoria(0);
    cout << "Ingrese el numero de notas: ";
    cin >> n;
    for (int i = 0; i < n; i++)
    {
        cout << "Ingrese la nota #" << n << ": ";
        cin >> notas[i];
        sumatoria = sumatoria + notas[i];
    }
    cout << "La media es: " << media(sumatoria, n);

    return 0;
}
double media(double sumatoria_notas, double numero_notas)
{
    return (sumatoria_notas / numero_notas);
}