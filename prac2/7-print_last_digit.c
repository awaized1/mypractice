#include "main.h"
#include <stdio.h>

/**
 * print_last_digit: Code prints last digit of a number
 * @a: the number to print its last digit
 *
 * return: the last digit
 */

int print_last_digit(int a)
{
	int b;

	b = a % 10;
	_putchar(b + '0');
	return b;
}
