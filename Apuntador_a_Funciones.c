#include "stdio.h"
#include "conio.h"

typedef int(*compare_func)(int a, int b);

int compare(int a, int b, compare_func compare_algorithm)
{
	printf("%d %d\n", a, b);
	int resul = compare_algorithm(a, b);
	return resul;
}

int max(int a, int b)
{
	int resul;
	if (a > b)
	{
		resul = a;
	}
	else
	{
		resul = b;
	}
	return resul;
}

int min(int a, int b)
{
	int resul;
	if (a < b)
	{
		resul = a;
	}
	else
	{
		resul = b;
	}
	return resul;
}

int main(int argc, char const *argv[])
{
	int compA = compare(8, 90, max);
	printf("max %d\n", compA);

	int compB = compare(8, 90, min);
	printf("Min %d\n", compB);
	return 0;
}