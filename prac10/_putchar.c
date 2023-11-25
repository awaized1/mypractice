#include "function_pointers.h"
#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>

/**
 * _putchar - function returns an integer.
 * @c - char
 */

int _putchar(char c)
{
	return(write(1, &c, 1);
}
