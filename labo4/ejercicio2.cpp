//hacer una calculadora con las operaciones basicas
//cada una en una funcion diferente
//Carlo Enrique Guerra Vega 00052220
#include <iostream>
using namespace std;
//declarando las funciones con su respectivas variables
int suma(int a,int b);
int resta(int a,int b);
int multiplicacion(int a,int b);
double division(double a, double b);

int main( )
{
    int dato1(0),dato2(0),eleccion(0);//declarando variables a usar, siendo dato 1 y 2 lo valores dados
//por el usuario y eleccion el cual se usara para el switch
     cout<<"Bienvenido a la calculadora basica.\n Seleccione que tipo de operacion quiere realizar:\n"
     <<"1)Suma.\n2)Resta.\n3)Multiplicacion.\n4)Division.\n";
     cin>>eleccion;
     switch (eleccion)
     {
     case 1:
       cout<<"Ingrese el primer dato: ";
       cin>>dato1;
       cout<<"Ingrese el segundo dato: ";
       cin>>dato2;
       cout<<"El resultado es "<<suma(dato1,dato2); //llamado a la funcion suma
        break;
     case 2:
       cout<<"Ingrese el primer dato: ";
       cin>>dato1;
       cout<<"Ingrese el segundo dato: ";
       cin>>dato2;
       cout<<"El resultado es "<<resta(dato1,dato2); //llamado a la funcion resta
        break;
     case 3:
       cout<<"Ingrese el primer dato: ";
       cin>>dato1;
       cout<<"Ingrese el segundo dato: ";
       cin>>dato2;
       cout<<"El resultado es "<<multiplicacion(dato1,dato2); //llamado a la funcion multiplicacion
        break;
     case 4:
       cout<<"Ingrese el primer dato: ";
       cin>>dato1;
       cout<<"Ingrese el segundo dato: ";
       cin>>dato2;
       cout<<"El resultado es "<<division(dato1,dato2); //llamado a la funcion division
        break;
     
     default:
     cout<<"Error, no selecciono una opcion correcta.\nVuelva a iniciar el programa."; //en caso de que se seleccione una opcion incorrecta
        break;
     }
    return 0;
}
int suma(int a,int b){
    return(a+b);//retornara la suma
}
int resta(int a, int b){
    return(a-b);//retornara la resta
}
int multiplicacion(int a,int b){
    return(a*b);//retornara la multiplicacioni
} 
double division(double a,double b){
    return(a/b);//retornara la division
}