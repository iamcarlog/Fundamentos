#include <iostream>
using namespace std;
//Carlo Enrique Guerra Vega 00052000
//establenciendo la constante que se trabajara en este caso es 2 ya que siempre te pedira elevar 2 a n exponente
const int num(2); 
int main()
{
int i, exponente,resultado(1);
//exponente sera el valor del exponente y resultado sera donde iteraremos la respuesta
cout<<"Ingresar la el numero del exponente: ";
cin>>exponente;
for ( i = 1; i <=exponente; i++)
//el for servira para realizar el proceso de potencia
{
    resultado=resultado*num;//servira para multiplicar por el mismo
}
cout<<"El resultado es: "<<resultado;
     
     return 0;
}