// Programa para repartir pizzas
// Indicar el nºpersonas y el nºpizzas encargadas
// Retornar el nºtrozos por persona y cuantos sobran
// Ten en cuenta que las pizzas se parten en 8 porciones
#include <iostream>
using namespace std;
const double porciones(8.00);
int main()
{
     int numero_personas(0),numero_pizzas(0);
     double numero_porciones(0),total_porciones(0);
     cout<<"Ingrese el numero de personas que hay:";
     cin>>numero_personas;
     cout<<"Ingrese el numero de pizzas que se han comprado:";
     cin>>numero_pizzas;
    numero_porciones=porciones*numero_pizzas;
    total_porciones=numero_porciones/numero_personas;
    cout<<"El numero de porciones que le tocara a cada persona sera de: "<<total_porciones;
     return 0;
}