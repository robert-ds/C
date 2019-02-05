#include <stdio.h>
#include <conio.h>

int main(int argc, char const *argv[])
{
	int dia;
	printf("Ingrese el dia de la Semana:\n");
	scanf("%d", &dia);

	switch(dia)
		{
			case 1:
			printf("Lunes");
			break;

			case 2:
			printf("Martes");
			break;

			case 3:
			printf("Miercoles");
			break;

			case 4:
			printf("Jueves");
			break;

			case 5:
			printf("Viernes");
			break;

			case 6:
			printf("Sabado");
			break;

			case 7:
			printf("Domingo");
			break;

			default: printf("Error: Dia Incorrecto ");

		}
	getch();	
	return 0;
}