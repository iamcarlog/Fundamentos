#include <iostream>
using namespace std;
double conversion(double litros); //funcion para convertir litros a galones
double mpg(double millas,double galon);
int main()
{
    int iniciador;
    double consumo_litros,millas_recorridas,consumo_galon;
    cout<<"Bienvenido a la calculadora de millas por galones!\n"<<"A continuacion se le pediran los siguientes datos";
    cout<<"\nSi desea iniciar presione 1, si desea cerrar el programa presione 0: ";
    cin>>iniciador;
    while (iniciador==1)
    {
        cout<<"\nIngrese los litros consumidos:";
        cin>>consumo_litros;
        cout<<"\nEl consumo en galones es: "<<conversion(consumo_litros)<<" gal";
        consumo_galon=conversion(consumo_litros);
        cout<<"\nngrese las millas recorridas: ";
        cin>>millas_recorridas;
        cout<<"\nLas millas por galon son: "<<mpg(millas_recorridas,consumo_galon);
        cout<<"\nDesea continuar? Presione [1] para continuar; Presione [0] para terminar";
        cin>>iniciador;

    }
    

     
     return 0;
}
double conversion(double litros){
    const double equivalencia(0.264179);
    return(litros*equivalencia);
}
double mpg(double millas,double galon){
    return(millas/galon);
}