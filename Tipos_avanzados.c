#include <stdio.h>
#include <conio.h>

int main(int argc, char const *argv[])
{
	int integer = 9;
	printf("%lu\n", sizeof(integer));

	short int sh = 9;
	printf("%lu\n", sizeof(sh));

	long int lng = 9;
	printf("%lu\n", sizeof(lng)); 

	signed int sinteger = 9;
	unsigned int uinteger = 128;
	float const ftl = 3.14159;
	enum boolean
	{
		NO,
		YES
	};
	
	printf("No = %d\n", NO);
	printf("YES = %d\n", YES);
	
	return 0;
}