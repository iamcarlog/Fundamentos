#include <iostream>
using namespace std;
//Carlo Enrique Guerra
int main()
{
  //declarando varibables de cual empezara y donde terminara
     int a(0),b(0);
     //ingresando los datos que ocuparemos
     cout<<"Ingrese el numero del que desea iniciar: ";
     cin>>a;
     cout<<"Ingrese el numero al que desea llegar: ";
     cin>>b;
     //generando una variable i para usar en el for 
     int i(0);
     i=a; //dandole el valor de inicio
     cout<<"A continuacion se imprimiran los numeros: ";
     for (i;i<=b;i++){
      //el for imprimira cada uno de os datos iniciando en el numero ingresado y autosumando
      //hasta llegar al numero deseado
       cout<<a<<" ";
       a=a+1;
     }
     
     return 0;
}