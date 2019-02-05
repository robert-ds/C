
/* Escribir un programa en C que:
1-)Pida por teclado un número (Dato Entero).
2-)Repita el paso 1, mientras que, el número introducido sea distinto de cero.
3-)Muestre por Pantalla la suma de los numeros pares e impares introducidos por el usuario.
 */

#include "stdio.h"
#include "conio.h"
int main(int argc, char const *argv[])
{
	
	int n1;
	int n2;
	int suma;
	printf("Digite un Numero Entero Diferente de Cero '0':\n ");
	scanf("%d", &n1);
	printf("Digite Otro Numero Distinto de Cero '0':\n ");
	scanf("%d", &n2);
	

	if (n1%n2==0)
	{
		suma=n1+n2;
		printf("La Suma de los Numeros Pares es: %d\n", suma);
		printf("Presione Enter Para Salir");

	}

	if (n1%n2!=0)
	{
		suma=n1+n2;
		printf("La Suma de los Numeros Impares es: %d\n", suma);
		printf("Presione Enter Para Salir");	
	}

	getch();
	return 0;

}