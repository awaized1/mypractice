#include <stdio.h>
#include "main.h"

/**
 * _strcat - Code concatenates two strings
 * @dest: The first string tpo concatenate
 * @src: The second string to concatenate
 *
 * Return: The new string pointer
 */

char *_strncpy(char *dest, char *src, int n)
{
        int a, b, c;

        for (a = 0; dest[a] != '\0'; a++)
        {
        }

        for (b = 0; src[b] != '\0'; b++)
        {
        }

        for (c = 0; c < n; c++)
        {
                dest[c] = src[c];
        }
        return (dest);
}
