#include <iostream>
#include <fstream>
using namespace std;

int main( )
{
    ifstream flujo_in;
    ofstream flujo_out;
    flujo_in.open("texto.txt");
    int num1,num2,num3,num4;
    double promedio;
    flujo_in>>num1>>num2>>num3>>num4;
    promedio=(num1+num2+num3+num4)/4;
    cout<<promedio;
    return 0;
}