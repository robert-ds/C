#include <stdio.h>
#include <conio.h>
#include <string.h>
#include <errno.h>
#include <stdlib.h>

extern int errno;

int main(int argc, char const *argv[])
{

	FILE *file = fopen ("nothing.txt", "r");
	if (file==NULL)
	{
		perror("Falla");

		char *errorstring = strerror(errno);
		fprintf(stderr, "<Falla>%s\n", errorstring);

		exit(EXIT_FAILURE);
	}

	exit(EXIT_SUCCESS);
	puts("final");
	return 0;
}