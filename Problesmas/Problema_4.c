/* Realiar un Programa que determine el numero mayor de tres numeros enteros  */

#include <stdio.h>
#include <conio.h>

int main(int argc, char const *argv[])
{
	int a;
	int b;
	int c;
	printf("Ingrese el primer Numero entero: ");
	scanf("%d", &a);
	printf("Ingrese el Segundo Numero entero: ");
	scanf("%d", &b);
	printf("Ingrese el Tercer Numero entero: ");
	scanf("%d", &c);

	if (a>b & a>c)
	{
		printf("El numero mayor es: %d", a);
	}

	if (b>a & b>c)
	{
		printf("El numero mayor es: %d", b);
	}

	if (c>a & c>b)
	{
		printf("El numero mayor es: %d\n", c);
	}

	printf("Presione Enter Para Salir");

	getch();
	return 0;
}
