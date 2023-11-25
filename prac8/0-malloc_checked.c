#include <stdio.h>
#include "main.h"
#include <stdlib.h>

/**
 *
 */

void *malloc_checked(unsigned int b)
{
	unsigned int *ar;
	
	ar = malloc(b);
	return (ar);

	if (ar == NULL)
		exit(98);
}
