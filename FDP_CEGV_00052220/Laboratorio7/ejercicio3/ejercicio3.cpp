//Escriba un programa que almacene cuantas letras a tiene una palabra en la primera línea, cuantas letras e en la segunda, cuantas letras i en la tercera, y así sucesivamente para las demás vocales.
//Carlo Enrique Guerra Vega 00052220
#include <iostream>
#include <cstring>
using namespace std;

int main( )
{
    //abriendo archivo
 FILE *archivo = fopen("texto.txt", "w");
    string palabra;
    int contador_a=0,contador_e=0,contador_i=0,contador_o=0,contador_u=0,largo;
    // Confirmar que esta cerrado
    if (archivo == NULL)
    {
        printf("ERROR!");
        return 1;
    }
    //ingresando la palabra
    cout<<"Ingrese una palabra: \n";
    cin>>palabra;
    largo=palabra.length();//encontrando largo de la palabra
    for (int i = 0; i < largo; i++)
    {
        //contador de vocales
        if (palabra[i]=='a')
        {
            contador_a++;
        }
        else if (palabra[i]=='e')
        {
            contador_e++;
        }
        else if (palabra[i]=='i')
        {
            contador_i++;
        }
        else if (palabra[i]=='o')
        {
            contador_o++;
        }
        else if (palabra[i]=='u')
        {
            contador_u++;
        }
    }
    //lo que saldra en el archivo
    fprintf(archivo, "Contador de a: ");
    fprintf(archivo, "%d", contador_a);
    fprintf(archivo, "\n");
    fprintf(archivo, "Contador de e: ");
    fprintf(archivo, "%d", contador_e);
    fprintf(archivo, "\n");
    fprintf(archivo, "Contador de i: ");
    fprintf(archivo, "%d", contador_i);
    fprintf(archivo, "\n");
    fprintf(archivo, "Contador de o: ");
    fprintf(archivo, "%d", contador_o);
    fprintf(archivo, "\n");
    fprintf(archivo, "Contador de u: ");
    fprintf(archivo, "%d", contador_u);
    fprintf(archivo, "\n");

    fclose(archivo);
    return 0;


    return 0;
}