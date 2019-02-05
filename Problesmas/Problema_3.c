/*En lenguaje C se quiere escribir un programa que:

1-)Pida por teclado la nota(dato real) de una asignatura.
2-)Muestre por pantalla:

* "Sobresaliente", en el caso de que la nota sea mayor o igual que 9 y menor igual que 10.

* "Notable", en el caso de que la nota sea mayor o igual a 7 y menor que 9.

* "Bien", en el caso de que la nota se mayor o igual que 6 y menor que 7.

* "Suficiente", en el caso de que la nota sea mayor o igual que 5 y menor que 6.

* "Insuficiente", en el caso de que la nota sea mayor o igual a 3 y menor que 5.

* "Muy deficiente", en el caso de que la nota sea mayor o igual 0 y menor que 3.

* "Error: Nota Incorrecta", en el caso de que la nota sea menor que 0 o mayor que 10.

 */

#include <stdio.h>
#include <conio.h>

int main(int argc, char const *argv[])
{
	float n;
	printf("Escriba la Nota real de la Asignatura Matematicas:\n");
	scanf("%f", &n);


	if (n>=9 & n<=10)
	{
		printf("Sobresaliente");
	}

	if (n>=7 & n<9)
	{
		printf("Notable");
	}

	if (n>=6 & n<7)
	{
		printf("Bien");
	}

	if (n>=5 & n<6)
	{
		printf("Suficiente");
	}

	if (n>=3 & n<5)
	{
		printf("Insuficiente");
	}

	if (n>=0 & n<3)
	{
		printf("Muy Deficiente");
	}

	if (n<0 | n>10)
	{
		printf("Error: Nota Incorrecta");
	}

	
	getch();
	return 0;
}