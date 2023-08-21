#include <stdio.h>
#include "main.h"

/**
 * main - Code does times table
 *
 * returns - void
 */

void times_table(void)
{
	int a, b, c, d;
	for (a = 0; a <= 9; a++)
		for(b = 0; b <= 9; b++)
		{
			c = (a * b);
			for(d = 0; d <= 9; d++)
				printf("%d ,", c);
			printf("\n");
		}
}
