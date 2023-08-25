#include <stdio.h>
#include "main.h"

/**
 * print_rev - Prints a string in reverse
 * @s: The string to be printed in reverse
 *
 * return: void
 */

void print_rev(char *s)
{
	int a, b;

	for (a = 0; s[a] != '\0'; a++)
	{
	}

	for (b = a; b >= 0; b--)
	{
		_putchar(s[b]);
	}
		_putchar('\n');
}
