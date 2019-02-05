#include <stdio.h>
/*Imprime la tabla Fahrenheit-Celcius para fahr=0,20, ...,300; Version de Punto Flotante*/

int main(int argc, char const *argv[])
{
    float fahr,celsius;
    int lower, upper,step;

    lower=0; /*Límite Inferior de la tabla de Temperaturas*/
    upper=300; /*Limite Superior*/
    step=20; /*Tamaño del Incremento*/

    fahr=lower;

    printf("Fahr    Celsius\n");/*Cabecera de los Datos Obtenidos*/

    while(fahr <= upper){
        celsius=(5.0/9.0)*(fahr-32.0);
        printf("%3.0f\t%6.2f\n", fahr,celsius);
        fahr=fahr+step;
    }
    getch();
    return 0;
}