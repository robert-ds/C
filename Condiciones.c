#include "stdio.h"

int main(int argc, char const *argv[])
{
	char gender = 'f';

	if (gender == 'm')
	{
		puts("Hombre");

	}
	
	else if (gender == 'f')
	{
		puts("Mujer");
	}

	else
	{
		puts("¿?");
	}
	
	int age = 15;

	if (age > 12 && age < 18)
	{
		puts("adolescente");
	}

	else
	{
		puts("Niño");
	}
	
	char character = 'A';

	switch(character)

	{
		case 'a':
		case 'A':
			puts("alpha");
			break;

		case 'b':
			puts("Beta");
			break;

		default:
			puts("?");
			

	}




	return 0;
}