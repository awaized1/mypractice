#include "main.h"
#include <stdio.h>
#include <stdlib.h>
#include "main.h"

/**
 * main - check the code for ALX School students.
 *
 * Return: Always 0.
 */

int main(void)
{
	char *buffer;
	char name = 'a';

	buffer = create_array(98, name);
	printf("%c", buffer[0]);
	putchar('\n');
	return (0);
}
