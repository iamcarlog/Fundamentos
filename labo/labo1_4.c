#include <stdio.h>
int main(){
    //crear variables y inicializrlas a 0
    float cel,fa = 0;
    printf("Programa conversor de grados celcius a farenheit.\nIngrese la temperatura en grados celsius:\n");
    scanf("%f",&cel);
    fa=((cel*(1.8))+32);
    printf("\nLa temperatura en farenheit es de:%f grados.\n",fa);
    return 0;
}