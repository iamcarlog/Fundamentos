#include <stdio.h>
int main(){
    int a,b,suma,resta,multiplicacion = 0;
    float division;
    printf("Ingrese el primer numero:\n");
    scanf("%d",&a);
    printf("\nIngrese el segundo numero:\n");
    scanf("%d",&b);
    suma=a+b;
    resta=a-b;
    multiplicacion=a*b;
    division=a/b;
    printf("%d es la suma de los dos numeros.\n",suma);
    printf("%d es la resta de los dos numeros.\n",resta);
    printf("%d es la multiplicacion de los dos numeros.\n",multiplicacion);
    printf("%f es la division de los dos numeros.\n",division);
    return 0;
}