/*Calcule el total a Pagar por la Compra de Camisas
Si se compran tres (3) Camisas o más se aplica un descuento del 20% sobre el total de la compra, y si son menos de
de tres camisas un descuento del 10%. 
*/

#include "stdio.h"
#include "conio.h"

int main(int argc, char const *argv[])
{
	int nc; //Numero de Camisas Compradas
	float pc; //Precio de Una Camisa
	float pr; //Precio Relativo; Sin Descuento
	float tp; //Total a Pagar

	printf("Digite la Cantidad de Camisas que Compro: ");
	scanf("%d", &nc);
	printf("Digite el Precio Unitario de las Camisas: ");
	scanf("%f", &pc);

	if (nc>=3)
	{
		pr=(nc*pc)*(0.20);
		tp=(nc*pc)-(pr);
		printf("El Precio a Pagar con Descuento del 20 Porciento es: %6.3f BS", tp);
		printf("\nPresione Enter Para salir");
	}

	if (nc<3)
	{
		pr=(nc*pc)*(0.10f);
		tp=(nc*pc)-(pr);
		printf("El Precio a Pagar con Descuento del 10 Porciento es: %6.3f BS", tp);
		printf("\nPresione Enter Para salir");
	}

	getch();
	return 0;

}
