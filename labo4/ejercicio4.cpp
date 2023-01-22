//Una función que reciba un límite inferior y uno superior, 
//luego realizar la iteración de estos límites, sumando el valor de cada número del rango.
//Se debe retornar el valor final de la suma.
//Por ejemplo: La suma del rango 2 hasta 6 sería: 2 + 3 + 4 + 5 + 6 = 20.
//Carlo Enrique Guerra Vega
#include <iostream>
using namespace std;
int sumatoria(int limite_inferior,int limite_superior); //declarando la funcion de la sumatoria
int main( )
{
     int dato1(0),dato2(0);//datos que ingresara el usuario
     cout<<"Ingrese el limite inferior: ";
     cin>>dato1;
     cout<<"Ingrese el limite superior: ";
     cin>>dato2;
     cout<<"La sumatoria es: "<<sumatoria(dato1,dato2);//se manda a llamar a la funcion para imprimirla
    return 0;
}
int sumatoria(int limite_inferior,int limite_superior){
    int resultado,sumatoria(0);//se usara resultado para saber hasta donde iterar y sumatoria donde se establecera el valor final
    resultado=limite_superior-limite_inferior;
    for (int i = 0; i <= resultado; i++)
    {
        sumatoria=sumatoria+limite_inferior;//se ira sumando desde el limite inferior hasta el final
        limite_inferior++;//autoincremento para que funcione la sumatoria
    }
    return(sumatoria);//retorna el valor que dio la sumatoria
    }
