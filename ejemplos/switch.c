#include <stdio.h>

int main() {
    char operador;
    double numero1, numero2;

    printf("Introduzca un operador (+, -, *, /): ");
    scanf("%c", &operador);

    printf("Introduzca dos operandos: ");
    scanf("%lf %lf",&numero1, &numero2);

    switch(operador)
    {
        case '+':
            printf("%.1lf + %.1lf = %.1lf",numero1, numero2, numero1 + numero2);
            break;

        case '-':
            printf("%.1lf - %.1lf = %.1lf",numero1, numero2, numero1 - numero2);
            break;

        case '*':
            printf("%.1lf * %.1lf = %.1lf",numero1, numero2, numero1 * numero2);
            break;

        case '/':
            printf("%.1lf / %.1lf = %.1lf",numero1, numero2, numero1 / numero2);
            break;

// Llegaremos aquí si el valor introducido// no es caulquiera de estos: +, -, *, /
        default:
            printf("Error! Operador incorrecto!");
    }

    return 0;
}