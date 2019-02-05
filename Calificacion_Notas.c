#include <stdio.h>
#include <conio.h>

float main(float argc, char const *argv[])
{
	
	float nota;

	printf("Ingrese la Nota Real: \n");
	scanf("%f", &nota);

	if (nota >= 10)
	{
		printf("Aprobado \n");
	}

	else
	{
		printf("Reprobado");
	}
	return 0;
}