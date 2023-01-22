//sobrecarga de funciones

#include <iostream>
using namespace std;
double media(double n1, double n2, double n3);
double media(double n1, double n2);
int main()
{
     double primero,segundo,tercero;
     cout<<"ingrese los numeros de los que desea la media";
     cout<<"\nDigite el primer numero:";
     cin>>primero;
     cout<<"\nDigite el segundo numero:";
     cin>>segundo;
     cout<<"\nDigite el tercer numero:";
     cin>>tercero;
     cout<<"\nLa media sera: "<<media(primero,segundo,tercero)<<"\n";
     return 0;
}
double media(double n1, double n2)
{
     return((n1+n2)/2.0);
}
double media(double n1,double n2,double n3){
     return((n1+n2+n3)/3.0);
}