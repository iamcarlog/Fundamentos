//hacer un programa donde se reciban 3 numeros para hacer una eq cuadratica
#include <iostream>
#include <cmath>
using namespace std;

int main( )
{
     float a,b,c,x1,x2,raiz1,raiz2,raiz3,raiz4;
     cout<<"Para una eq de la forma ax^2+bx+c\n"<<"Ingrese a: ";
     cin>>a;
     cout<<"\nIngrese b: ";
     cin>>b;
     cout<<"Ingrese C: ";
     cin>>c;
     //-b+-(sqrt(b^2-4ac))/2a
     if((pow(b,2)-4*a*c)<0){
     x1=((-b+sqrt(pow(b,2)-4*a*c))/2*a);
     x2=((-b-sqrt(pow(b,2)-4*a*c))/2*a);
     cout<<x1<<","<<x2;}
     else if((pow(b,2)-4*a*c)<0){
        raiz1=(-b/2*a);
        raiz2=((sqrt(abs(pow(b,2)-4*a*c)))/2*a);
        cout<<raiz1<<"+"<<raiz2<<"i";
        raiz3=(-b/2*a);
        raiz4=(-(sqrt(abs(pow(b,2)-4*a*c)))/2*a);
        cout<<raiz3<<"+"<<raiz4<<"i";

     }
    return 0;
}