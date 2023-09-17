#include "main.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * str_concat - concatenates two strings into a new memory
 * @s1: First string to concat
 * @s2: Second string to concat
 *
 * Return: The pointer to new memory
 */

char *str_concat(char *s1, char *s2)
{
	int a, b, c, d, e;
	char *ar;

	for (a = 0; s1[a] != '\0'; a++)
	{
	}

	for (b = 0; s2[b] != '\0'; b++)
	{
	}

	ar = malloc((a + b + 1) * sizeof(char));

	for (c = 0; c < a; c++)
		ar[c] = s1[c];

	for (e = 0, d = a; (d < (a + b)) && (e < b); d++, e++)
		ar[d] = s2[e];

	ar[a + b] = '\0';
	return (ar);
}
