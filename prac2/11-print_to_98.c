#include <stdio.h>
#include "main.h"

/**
 * print_to_98 - Prints number from n to 98
 *
 * return - void
 */

void print_to_98(int n)
{
	for(; n <= 98; n++)
		printf("%d ,", n);
	printf("\n");
}
