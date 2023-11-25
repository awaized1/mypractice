#include "main.h"
#include <stdio.h>
#include <stdlib.h>

/**
 *
 */

int *array_range(int min, int max)
{
	int dif;
	int *ar;

	dif = max - min + 1;

	ar = malloc(dif * sizeof(int));

	for (dif = 0; min <= max; dif++, min++)
		ar[dif] = min;
	return (ar);
}
