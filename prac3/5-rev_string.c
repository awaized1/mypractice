#include <stdio.h>
#include <stdlib.h>
#include "main.h"

/**
 * rev_string - Code reverses a string
 * @s: string to be reversed
 *
 * return: void
 */

void rev_string(char *s)
{
    int a, b, d;
    char *c;

    for (a = 0; s[a] != '\0'; a++)
    {
    }
    printf("a = %d\n", a);

    c = (char *)malloc((a + 1) * sizeof(char));

    for (d = 0, b = a - 1; d < a; d++, b--)
    {
        c[d] = s[b];
    }
    c[d] = '\0';

    for (d = 0; d < a; d++)
        s[d] = c[d];
    s[a] = '\0';

    free(c);
}
