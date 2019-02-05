#include <stdio.h>

int main(int argc, char const *argv[])
{
	int number[] = {20, 40, 87, 190, 200};

	int count = sizeof(number)/sizeof(int);

	for (int i = 0; i < count; ++i)
	{
		printf("%d %d \n", i, number[i]);

	}

	int stop = 20;
	int step = 0;
	
	while(step < stop)
	{
		printf("%d\n", step);
		step++;
	}

	return 0;
}