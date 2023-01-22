#include <iostream>
using namespace std;

int main( )
{
     int n,bandera,k,residuo;
     cout<<"ingrese n: ";//se pide el numero a revisar
     cin>>n;
     if(n>=0){//si n es mayor o igual a 0 
        bandera=1;//se le da valor a bandera
        if (n>3)
        {
            k=2;//si n es nmayor a 3 k es 2
            if(k<n&&bandera){//si k es menor que n y bandera tiene valor de 1
                residuo=n%k;//sacar el residuo de n/k
                if (residuo==0)//si el residuo es 0, bandera toma valor de 0
                {
                    bandera=0;
                }
                k=k+1;//si no k incrementa
            }
        }
        if(bandera==1){//cuando bandera sea 1 n es numero primo
            cout<<n<<" es primo.";
        }
        else {cout<<n<<" no es primo.";}//si bandera tiene un numero diferente de 1 n no es primo
     }
     else{
        //si n es menor que 0 se debe ingresar un numero mayor
        cout<<n<<" debe ser mayor a 0";
     }
    return 0;
}