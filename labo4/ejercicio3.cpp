//calcular la potencia N de un número base, pero desde una función que retorne el valor.
//En este ejercicio es obligatorio enviar los datos por referencia, es decir, hacer uso de punteros. 
//Por ejemplo: 2^8 es 256. 3^7 es 2187.
//Carlo Enrique Guerra Vega 00052220
#include <iostream>
#include <cmath>
using namespace std;
int potencia(int *num1, int *num2);//Definiendo funcion que usa punteros
int main( )
{
    int a(0),b(0);//estableciendo la variables para ingresar datos
    int *ptrA,*ptrB;//estableciendo los punteros
    cout<<"Ingrese la base: ";
    cin>>a;
    cout<<"Ingrese el exponente: ";
    cin>>b;
    ptrA=&a;//extrayendo la direccion de a
    ptrB=&b;//extrayendo la direccion de b
    cout<<"El resultado es: "<<potencia(ptrA,ptrB);//uso de funcion usando las direcciones de variables a y b
    return 0;
}
int potencia(int *num1,int *num2){
    return(pow(*num1,*num2));//retornara la potencia del dato sacado de la direccion.
}