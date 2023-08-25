#include <stdio.h>
#include "main.h"

/**
 * _puts - prints string to stdout
 * @str: string to be printed
 *
 * return: void 
 */

void _puts(char *str)
{
	int a;
	for (a = 0; str[a] != '\0'; a++)
	{
		_putchar(str[a]);
	}
	_putchar('\n');
}
