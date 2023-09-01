#include <stdio.h>
#include "main.h"

/**
 * string_toupper - Convers lower case to upper
 *
 * Return: string
 */

char *string_toupper(char *s)
{
	int a;

	for (a = 0; s[a] != '\0'; a++)
		if ((s[a] >= 97) && (s[a] <= 122))
			s[a] = s[a] - 32;
	return (s);
}
