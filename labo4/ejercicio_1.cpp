//Una función que reciba un número como parámetro, 
//determine si es par o impar y muestre el resultado en un mensaje.
//Carlo Enrique Guerra Vega 00052220
#include <iostream>
using namespace std;
int par_impar(int numero);
int main( )
{
    int dato_usuario,resultado;
     cout<<"Ingrese un numero para saber si es par o impar: ";
     cin>>dato_usuario;
     resultado=par_impar(dato_usuario);
     if (resultado==0)
     {
        cout<<"El numero "<<dato_usuario<<" es par";
     }
     else{
        cout<<"El numero "<<dato_usuario<<" es impar";
     }
     

    return 0;
}
int par_impar(int numero){
    int residuo,resultado;
    residuo=numero%2;
    if (residuo==0)
    {
        return(0);
    }
    else{
        return(1);
    }
}