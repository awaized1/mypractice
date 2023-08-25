#include <stdio.h>
#include "main.h"

/**
 * swap_int - Code swaps two integers
 * @a: first integer to swap
 * @b: second integer to swap
 * return - void
 */

void swap_int(int *a, int *b)
{
	int c;

	c = *a;
	*a = *b;
	*b = c;
}
