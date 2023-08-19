#include <unistd.h>
#include "main.h"

/**
 *  _putchar - Code prints to std
 *
 *  return - integer value of char
 */

int _putchar(char c)
{
	return (write(1, &c, 1));
}
