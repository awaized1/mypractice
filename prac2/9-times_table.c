#include <stdio.h>
#include "main.h"

/**
 * main - Code does times table
 *
 * returns - void
 */

void times_table(void)
{
	int a, b, c;
	for (a = 0; a <= 9; a++)
		for(b = 0; b <= 9; b++)
		{
			c = (a * b);
			printf("%d ,", c);
			if((b == 9))
				printf("\n");
		}
}
