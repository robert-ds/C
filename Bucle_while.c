#include <stdio.h>
#include <conio.h>

int main(int argc, char const *argv[])
{
	int contador=1;

	while(contador<=10)
	{
		printf("%d\n", contador);
		contador=contador+1;
	}
	
	getch();	
	return 0;
}