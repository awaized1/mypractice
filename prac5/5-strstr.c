#include <stdio.h>
#include "main.h"

/**
 * _strstr - searches through a string
 * @haystack: the main string
 * @needle: the string to search for
 *
 * Return: string
 */

char *_strstr(char *haystack, char *needle)
{
	int a, b, c, d , e;

	for (a = 0; haystack[a] != '\0'; a++)
	{
	}
	for (b = 0; needle[b] != '\0'; b++)
	{
	}
	for (c = 0; c <= a; c++)
		if (haystack[c] == ' ')
			for (d = c+1; haystack[d] != ' '; d++)
				for (e = 0; e <= b; e++)
				{
					if (needle[e] == haystack[d])
					{
						printf("The string is present.\n");
						return (needle);
					}
					else
						printf("The string is not present.\n");
				}
	return (haystack);
}
