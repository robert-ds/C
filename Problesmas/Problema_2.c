/* Escriba un programa en Lenguaje C que solicite el ingreso de un numero del 1 al 9 y que muestre por pantalla el numero
seleccionado en letras */
#include <stdio.h>
#include <conio.h>

int main(int argc, char const *argv[])

{
	int n;
	printf("Digite un numero del 1 al 9:\n");
 	scanf("%d", &n);

	switch(n)
	{
		case 1:
		printf("Uno");
		break;

		case 2:
		printf("Dos ");
		break;

		case 3:
		printf("Tres");
		break;

		case 4:
		printf("Cuatro");
		break;

		case 5:
		printf("Cinco");
		break;

		case 6:
		printf("Seis");
		break;

		case 7:
		printf("Siete");
		break;

		case 8:
		printf("Ocho");
		break;

		case 9:
		printf("Nueve");
		break;

	}

	getch();
	return 0;
}