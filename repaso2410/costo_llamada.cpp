#include <iostream>
using namespace std;

int main( )
{
    const double costo_usual=0.40,costo_madrugador=0.25,costo_finde=0.15;
    int hora[2],minutos;
    cout<<"Ingrese la hora en la cual inicio la llamada: ";
    cin>>hora[0];
    cout<<"Ingrese el minuto en el cual inicio la llamada: ";
    cin>>hora[1];
    cout<<"Ingrese la duracion de la llamada redondeada al minuto mas cercano: ";
    cin>>minutos;
    if (hora[0]<8||hora[0]>=18)
    {
        /* code */
    }
    else if (hora[0]>=8)
    {
        /* code */
    }
    
    
    return 0;
}