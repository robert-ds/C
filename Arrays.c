#include <stdio.h>

int main(int argc, char const *argv[])
{
	char chain[] = "Hola Mundo";
	//char chain[] = {'H', 'o', 'l', 'a', '\0'};

	printf("Chain: %s char size: %ld chain size %ld\n" , chain, sizeof(char), sizeof(chain));

	int serie[] = {7, 9, 70, 5};
	long int serieSize = sizeof(serie);
	printf("Size of serie:  %ld integer size: %ld\n", serieSize, sizeof(int));
	return 0;
}
