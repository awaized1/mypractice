#include <stdio.h>
#include "main.h"

/**
 * jack_bauer - Code prints the time from 00:00 to 23:59
 *
 * return: void
 */

void jack_bauer(void)
{
	char a, b, c, d;
	for(a = '0'; a <= '2'; a++)
		for(b = '0'; b <= '9'; b++)
			for(c = '0'; c <= '6'; c++)
				for (d = '0'; d <= '9'; d++)
				{
					if((a <= '1') && (c <= '5'))
					{
						_putchar(a);
						_putchar(b);
						_putchar(':');
						_putchar(c);
						_putchar(d);
						_putchar('\n');
					}
					else if((a > '1') && (b < '4') && (c <= '5'))
					{
						_putchar(a);
						_putchar(b);
						_putchar(':');
						_putchar(c);
						_putchar(d);
						_putchar('\n');
					}
				}
}							
