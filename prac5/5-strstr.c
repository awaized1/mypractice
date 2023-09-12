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
	for (; *haystack != '\0'; haystack++)
	{
		char *i = haystack;
		char *p = needle;
	
	while (*i == *p && *p != '\0')
	{
		i++;
		p++;
	}

	if (*p == '\0')
		return (haystack);
	}
	return (0);
}
