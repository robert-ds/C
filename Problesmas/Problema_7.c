/* Escribir en Lenguaje C un programa que muestre por Pantalla la tabla de multiplicar de un Numero entero introducido 
por el usuario. El proceso debe repetirse mientras que el usuario o desee. */

#include "stdio.h"
#include "conio.h"

int main(int argc, char const *argv[])
{
	int a;
	int b;
	printf("Introduzca un Numero para Saber su Tabla de Multiplicar: ");
	scanf("%d", &a);

		for(int i = 1; i <= 12; ++i)
		{
			b=a*i;
			printf("\t%dx", a);
			printf("%i=", i);
			printf("%d\n", b);
		}

	printf("\nPresione Enter Para Salir");	

	getch();
	return 0;
	

}

