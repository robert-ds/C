#include <conio.h> //Para getch
#include <stdio.h> //Para printf

int main(){
char tecla;

printf("Pulsa la tecla de la que quieres conocer su codigo: ");
tecla = getch();

printf("\nEl codigo de la tecla pulsada es: %d\n",tecla);

return 0;
}