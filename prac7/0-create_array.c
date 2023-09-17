#include "main.h"
#include <stdio.h>
#include <stdlib.h>

/**
 *
 */

char *create_array(unsigned int size, char c)
{
	char *ar;
	unsigned int i;

	ar = malloc(size * sizeof(char));

	for (i = 0; i < size; i++)
		ar[i] = c;
	return (ar);
}
