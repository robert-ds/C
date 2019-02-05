/* Realizar un Programa que Convierta Grados Centigrados a Grados Fahrenheit*/

#include <stdio.h>
#include <conio.h>


float main(float argc, char const *argv[])
{
   
    float fahr,cels;
    printf("Ingrese la Temperatura en Grados Celsius para Obtener la Temperatura en Grados Fahrenheit: ");
    scanf("%f", &cels);

    fahr=(cels*9.0)/5.0+32.0;
    printf("%f Grados Fahrenheit \n", fahr); 
    printf("Presione Enter para Salir");
    
    getch();
    return 0;
}