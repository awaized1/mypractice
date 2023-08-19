#include "main.h"
#include <stdio.h>

/**
 * main - the alphabet in small letter code
 *
 * return - 0 on success
 */

int main(void)
{
	int i;
	char al;
	char rev;
	char num;
	char alp;
	char p1;
	char p2;
	char p3;

	for (i = 97; i < 123; i++)
		_putchar(i);
	_putchar('\n');
	
	for (al = 'A'; al <= 'Z'; al++)
	{
	if((al != 'B') & (al != 'C'))
	{
		_putchar(al);
		_putchar('\n');
	}
	}

	for (rev = 'z'; rev >= 'a'; rev--)
		_putchar(rev);
	_putchar('\n');

	for (num = '0'; num <= '9'; num++)
		_putchar(num);

	for (alp = 'a'; alp < 'g'; alp++)
		_putchar(alp);
	
	_putchar('\n');

	for (p1 = '0'; p1 <= '2'; p1++)
	{
		for(p2 = '0'; p2 <= '2'; p2++)
		{
			for(p3 = '0'; p3 <= '2'; p3++)
			{
				_putchar(p1);
				_putchar(p2);
				_putchar(p3);
				_putchar('\n');
			}
		}
	}

	return (0);
}
