#include <iostream>
using namespace std;
//Carlo Enrique Guerra Vega 00052220
int main()
{
     int numero,i,multiplicador; //declarando variables a usar
     numero=0;
     i=1;
     multiplicador=1;//se usara para multiplicar 
     cout<<"Ingrese el numero del que desea los multiplos: ";
     cin>>numero;
     for(i;i<=10;i++){
        //este for se usa para imprimir los multiplos 
        cout<<numero*multiplicador<<" ";
        multiplicador=multiplicador+1;//
     }
     return 0;
}