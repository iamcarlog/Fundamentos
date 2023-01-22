#include <iostream>
using namespace std;
//Carlo Enrique Guerra Vega 00052220
//disclaimer: funciona con numeros de un solo digito sin separar por espacios
int main()
{
    FILE *archivo = fopen("numeros.txt", "r");
    // comprobando si el archivo se abre
    if (archivo == NULL)
    {
        cout << "Error!";
        return 1;
    }
    int num = 0,num2 = 0, contador = 0,suma=0;
    float prom = 0;
    char ch;
    //se obtiene el caracter del numero
    ch=fgetc(archivo);
    num=int(ch)-48;//para convertir el numero ascii a entero es n-48
    do{
        suma+=num;//se realiza la sumatoria;
        ch=fgetc(archivo);
        num=int(ch)-48;
        contador++;//cuenta el numero de elementos

    } 
    while(ch!=EOF);
    prom=suma/(contador);//se hace el promedio entre los elementos 
    cout<<"El promedio es: "<<prom;
    fclose(archivo);
    return 0;
}