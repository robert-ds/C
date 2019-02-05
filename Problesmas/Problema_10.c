/* Realizar un programa que solicite un numero entero por teclado y a continuación visualice por pantalla todos los números primos entre 1 y el numero introducido. */

#include <stdio.h>
#include <stdlib.h>
#include <conio.h>

// Predefinición de funciones
int EsPrimo(int);
// Función principal
int main(int argc,char *argv[])
{
   int numero;
   int valores;
   // Solicitar por pantalla el numero
   printf("Digite un numero: ");
   scanf(" %d",&numero);
   // Visualizar todos los números primos entre 1 y el numero
   // se utilizara una función para saber si un numero es primo o no
   for(valores=1;valores<=numero;valores++)
   {
       if(EsPrimo(valores)==0)
         printf("El valor %d es primo\n");
   }
   return 0;
}

// Funciones desarrolladas
// la funcion devuelve 0 si el numero es primo en caso contrario 1
int EsPrimo(int Valor);
{
  int primo=0;
  int divisores=0;
  // Calcular divisores del numero
  for(divisores=2;divisores<Valor-1 && primo==0;divisores++)
  {
    // Comprobar si existe un divisor
    if(Valor%divisores==0) primo=1;
  }
  return primo;
}
