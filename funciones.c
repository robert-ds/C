#include <stdio.h>

int biggest(int numA, int numB)
	{
		int result;

		if (numA > numB)
		{
			result = numA;
		}

		else if (numA < numB)
		{
			result = numB;
		}	

		return result;
	}


int main(int argc, char const *argv[])
{
	int max = biggest(25, 86);
	printf("%d\n", max);
	return 0;
}