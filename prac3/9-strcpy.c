#include <stdio.h>
#include <stdlib.h>
#include "main.h"

/**
 * _strcpy - Code copies string to another string
 * @dest: New string
 * @src: Old string to be copied
 *
 * return: The sting 
 */

char *_strcpy(char *dest, char *src)
{
	int a;

	for (a = 0; src[a] != '\0'; a++)
	{
		dest[a] = src[a];
	}
	dest[a + 1] = '\0';
	return (dest);
}
