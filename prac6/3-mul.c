#include "main.h"
#include <stdio.h>
#include <stdlib.h>

/**
*/

int main(int argc, char *argv[])
{
	int i, mul;
	
	for (i = 0; i < 3; i++)
		if (argc == 3)
			printf("%s ", argv[i]);
		if (argc == 3)
			printf("\n");
	if (argc > 3)
		printf("Cannot multiply 3 digits\n");
	if (argc == 1)
		printf("You need to enter two integers\n");
	if (argc == 2)
		printf("You need to add one more integer\n");
	if (argc == 3)
	{
		mul = ((atoi(argv[1])) * (atoi(argv[2])));
		printf("%s * %s = %d\n", argv[1], argv[2], mul);
	}
	return (0);
}
