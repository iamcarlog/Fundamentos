//hacer programa para vender zapaos, son son mas de diez se les dara un 10% de descuento
//si es mayor de 20 pero menor de 30 un 20%
//si sno mas de 30 se les dara 40%, el precio de cada zapato es de 80
#include <iostream>
using namespace std;
const int costo_zapato(80);
int main()
{
    int numero_zapatos;
    double costo_total;
    cout<<"ingrese el numero de zapatos a vender:";
    cin>>numero_zapatos;
    if (numero_zapatos>=10 && numero_zapatos<20)
    {
        costo_total=numero_zapatos*costo_zapato-((numero_zapatos*costo_zapato)*0.10);
        cout<<"Se aplicara un descuento de 10% y el costo sera de:"<<costo_total<<"\n";
    }
    else if(numero_zapatos>=20&&numero_zapatos<30){
        costo_total=numero_zapatos*costo_zapato-((numero_zapatos*costo_zapato)*0.2);
        cout<<"Se aplicara un descuento de 20% y el costo sera de:"<<costo_total<<"\n";
    }

    else if(numero_zapatos>=30){
        costo_total=numero_zapatos*costo_zapato-((numero_zapatos*costo_zapato)*0.40);
        cout<<"Se aplicara un descuento de 40% y el costo sera de:"<<costo_total<<"\n";
    }
    else{
        costo_total=numero_zapatos*costo_zapato;
        cout<<"No se aplicara el descuento y el costo sera de:"<<costo_total<<"\n";
    }

     return 0;
}