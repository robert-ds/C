#include <stdio.h>
/*Sumatoria de dos numeros enteros cualesquiera*/
int main(int argc, char const *argv[])
{
	int n1,n2,suma;
	printf("\n Ingresa el Primer numero (Entero) ");
	scanf("%d", &n1);
	printf("\n Ingresa el segundo numero(Entero) ");
	scanf("%d", &n2);
	suma=n1+n2;
	printf("La suma de sus dos numeros enteros es: %d", suma);
	return 0;
}
