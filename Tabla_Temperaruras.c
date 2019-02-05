#include <stdio.h>
/*Imprime la tabla Fahrenheit-Celcius para fahr=0,20, ...,300 */

int main(int argc, char const *argv[])
{
    int fahr,celsius;
    int lower, upper,step;

    lower=0; /*Límite Inferior de la tabla de Temperaturas*/
    upper=300; /*Limite Superior*/
    step=20; /*Tamaño del Incremento*/

    fahr=lower;
    while(fahr <= upper){
        celsius=5*(fahr-32)/9;
        printf("%3d%6d\n", fahr,celsius);
        fahr=fahr+step;
    }
    getch();
    return 0;
}