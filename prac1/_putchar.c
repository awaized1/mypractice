#include "main.h"
#include <unistd.h>

/**
 * _putchar - Code writes a character to std out.
 * @c - the character to be displayed
 *
 * return - The alphabet or character
 */

int _putchar(char c)
{
	return (write(1, &c, 1));
}
