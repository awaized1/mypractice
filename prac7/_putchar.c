#include "main.h"
#include <unistd.h>

/**
 * _putchar - prints a character
 * @s - char
 *
 * Return: character
 */

int _putchar(char c)
{
	return (write(1, &c, 1));
}
