//calcular renta
//
#include <iostream>
using namespace std;

int main( )
{
double salario,renta,resultado;
const double afp=0.0725, isss=0.03;
cout<<"Ingrese su salario: ";
cin>>salario;
resultado=salario-(salario*afp)-(salario*isss);
if (resultado>=0.01 && resultado<472)
{
    renta=0;
    cout<<"La renta sera: "<<renta;
}
else if(resultado>472&&resultado<=895.24){
    renta=(salario-472.00)*0.1+17.67;
    cout<<"La renta sera"<<renta;
}
else if(resultado>895.24&&resultado>=2038.10){
    renta=(salario-895.21)*0.2+60;
    cout<<"La renta es "<<renta<<"dolares";
}
else{
    renta=(salario-2038.10)*0.3+288.57;
    cout<<"La renta es "<<renta<<"dolares";
}

    return 0;
} 