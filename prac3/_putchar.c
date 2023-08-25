#include <unistd.h>
#include "main.h"

/**
 * _putchar - Prints a character to stdout
 *
 * return - Charater to be printed
 */

int _putchar(char c)
{
	return (write(1, &c, 1));
}
