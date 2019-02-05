/* Escribir en Lenguaje C un programa que muestre por Pantalla la tabla de multiplicar de un Numero entero introducido 
por el usuario. El proceso debe repetirse mientras que el usuario o desee. */

#include "stdio.h"
#include "conio.h"
#define KEY_ENT 13
#define KEY_ESC 27

int main(int argc, char const *argv[])
{
	
	int n1;
	int n2;
	int i;
	char tecla;
	printf("Introduzca el Numero al Cual desea Saber su Tabla de Multiplicar:\n");
	scanf("%d", &n1);
	printf("Presione Enter las Veces que Desee Para Ir Obteniendo la Tabla de Multiplicar o Esc Para Salir:\n");

	while(tecla=getch()==KEY_ENT)
	{
		while(++i)
		 {
		 	n2=n1*i;
		 } 

		printf("%dx", n1);
		printf("%d=", i);
		printf("%d\n", n2);

	}

	if (tecla=getch()==KEY_ESC)
	{
		printf("\nCHAO");
	}

	return 0;


}
