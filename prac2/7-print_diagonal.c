#include <stdio.h>
#include "main.h"

/**
 * print_diagonal - This program prints the required number of diagonal
 *
 * return: void
 */

void print_diagonal(int n)
{
	int a, b;
	if (n <= 0)
		printf("$\n");
	if (n == 1)
		printf("\\$\n");
	if (n > 1)
	{
		for (a = 0; a < n; a++)
		{
			for (b = 0; b < n; b++)
			{
				if (b < a)
					printf(" ");
				if (b == a)
					printf("\\$");
			}
					printf("\n");
		}
	}
}
