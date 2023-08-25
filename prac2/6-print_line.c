#include <stdio.h>
#include "main.h"

/**
 * print_line - prints a line on the stdout
 *
 * return - void
 */

void print_line(int n)
{
	int a;
	if (n < 0)
		printf("$\n");
	for(a = 1; a <= n; a++)
		printf("_");
	printf("$");
	printf("\n");
}	
