#include "main.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * 
 */

char *_strdup(char *str)
{
	int n;
	int b;
	char *ar;

	for (n = 0; str[n] != '\0'; n++)
	{
	}
	ar = malloc((n+1) * sizeof(char));
 	printf("%d", n);
	for (b = 0; str[b] != '\0'; b++)
	{
		ar[b] = str[b];
	}
	ar[n] = '\0';
	return (ar);
}
