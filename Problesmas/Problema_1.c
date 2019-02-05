/* Escriba un programa que pida ingresar dos números enteros y luego permita seleccionar si se suman, restan, multipli
can, dividen y muestre en pantalla el resultado */

#include <stdio.h>
#include <conio.h>

int main(int argc, char const *argv[])

{
	int n1, n2, suma, resta, mult, divi, select;

	printf("Ingresa dos Numeros Enteros: \n");

	scanf("%d", &n1);
	scanf("%d", &n2);

	printf("Seleccione la Operacion que Desea:\n 1-)Suma\n 2-)Resta\n 3-)Multiplicacion\n 4-)Division\n");
	scanf("%d", &select);

	switch(select)
	{
		case 1:
		suma=n1+n2;
		printf("La Suma es: %d\n", suma);
		printf("Presione enter para salir" );	
		break;

		case 2:
		resta=n1-n2;
		printf("La Resta es: %d\n", resta);
		printf("Presione enter para salir" );
		break;

		case 3:
		mult=n1*n2;
		printf("La Multiplicacion es: %d\n", mult);
		printf("Presione enter para salir" );
		break;

		case 4:
		divi=n1/n2;
		printf("La Division es: %d\n\n", divi);
		printf("Presione enter para salir" );
		break;

		default: printf("Seleccion Incorrecta");
	}
	getch();
	return 0;

}