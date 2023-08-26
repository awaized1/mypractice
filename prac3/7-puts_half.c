#include <stdio.h>
#include <stdlib.h>
#include "main.h"

/**
 * void puts_half - prints half of the string
 * @str: string to be divided
 *
 * return: void
 */

void puts_half(char *str)
{
	int a, b;
	
	for(a = 0; str[a] != '\0'; a++)
	{
	}

	if ((a % 2) == 0)
	{
		b = a/2;
	}
	if ((a % 2) != 0)
	{
		b = (a+1)/2;
	}
	
	for (; b < a; b++)
	{
		_putchar(str[b]);
	}
	_putchar('\n');
}
