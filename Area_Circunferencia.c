#include <stdio.h>
#include <conio.h>
#define pi 3,14592
/*Area de cualquier circunferencia*/
float main(float argc, char const *argv[])
{
	float radio,area;

	printf("Ingresa el Radio: ");

	scanf("%f", &radio);

	area=radio*pi;

	printf("El area de la circunferencia es: %4f", area);

	return 0;
}
 	