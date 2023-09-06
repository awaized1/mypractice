#include <stdio.h>
#include "main.h"

/**
 * _strspn - code checks first segment of string
 * &s: string value containing what to check
 * &accept: string against what
 *
 * Return: the number of char
 */

unsigned int _strspn(char *s, char *accept)
{
	int n, m, o = 0;

	for (n = 0; s[n] != '\0'; n++)
	{
		for (m = 0; accept[m] != '\0'; m++)
		{
			if (accept[m] == s[n])
			{
				o++;
			}
		}
	}
	return (o);
}
