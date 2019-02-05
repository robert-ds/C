#include <stdio.h>
#include <stdlib.h>

struct cat
{
	char *name;
	int birth;
	float weight;
};

int main(int argc, char const *argv[])
{
	struct cat *dan = malloc(sizeof(struct cat));
	dan->name = "Robert";
	dan->birth = 2016;
	dan->weight = 3.980f;

	printf("Name: %s Birth: %d Weight: %f \n", dan->name, dan->birth, dan->weight);

	free(dan);

	bigint bInt = 432548184701947187509137593875938475589375981374953;
	printf("%lld\n", bInt);//Para Valores Muy Grandes
	
	return 0;
}