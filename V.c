#include <stdio.h>

int main(int argc, char const *argv[])
{
 	int birth = 1969;
 	int now = 2017;
 	int age = now - birth;
 	printf("Edad de C: %d\n", age);

 	int bagA = 10;
 	int bagB = 25;
 	printf("Sum: %d\n", bagA+bagB);

 	int ten = 10;
 	int three = 3;
 	printf("Multiplicar: %d\n", ten*three);
 	printf("División %d\n", ten/three);
 	printf("Oper: %d\n", ten%three);
 	getch();

	return 0;
}