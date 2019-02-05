/* Escribir en lenguaje C un programa que muestre por Pantalla todos los números pares que hay entre el 1 y el 
50, ambos inclusive */

#include "stdio.h"
#include "conio.h"

int main(int argc, char const *argv[])
{
	int i;
	printf("Numeros Pares entre 1 y 50:\n");
	printf("\t1\n");

	for (int i = 1; i <= 50; ++i)
	{
		if (i%2==0)
		{
			printf("\t%d\n", i);
		}
	}

	return	0;

}