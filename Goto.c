#include <stdio.h>

int factorial(int n)
{
	if (n <= 1)
	{
		return 1;
	}
	int result = n * factorial(n-1);
	return result;
}

int main(int argc, char const *argv[])
{
	goto Welcome;

	printf("1! %d\n", factorial(1));
	printf("3! %d\n", factorial(3));

	Welcome:
		printf("Bienvenido\n");
	return 0;
}