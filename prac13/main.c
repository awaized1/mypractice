#include <stdio.h>
#include <stdlib.h>

/**
 * main - Entry point
 *
 * Return: 0 on success
 */

int main(void)
{
	unsigned int a, b, c, d, e, f, lcm;

	printf("Enter 3 positive numbers to find LCM\n");
	scanf("%d %d %d", &a, &b, &c);

	if (a < b)
		d = b;
	else if (a > b)
		d = a;
	if (c < d)
		e = d;
	else if (c > d)
		e = c;
	printf("The number highest number is: %d\n", e);

	for (f = 2; f <= e; f++)
	{
		if((f % a == 0) || (f % b == 0) || (f % c == 0))
		{
			if((f % a == 0) && (f % b == 0) && (f % c == 0))
			{
				a = a / f;
				b = b / f;
				c = c / f;
			}
			
			else if((f % a == 0) && (f % b == 0) && (f % c != 0))
			{
				a = a / f;
				b = b / f;
				c = c / 1;
			}

			else if((f % a != 0) && (f % b == 0) && (f % c == 0))
			{
				a = a / 1;
				b = b / f;
				c = c / f;
			}
			
			else if((f % a == 0) && (f % b != 0) && (f % c == 0))
			{
				a = a / f;
				b = b / 1;
				c = c / f;
			}

			else if((f % a == 0) && (f % b != 0) && (f % c != 0))
			{
				a = a / f;
				b = b / 1;
				c = c / 1;
			}

			else if((f % a != 0) && (f % b == 0) && (f % c != 0))
			{
				a = a / 1;
				b = b / f;
				c = c / 1;
			}

			else if((f % a != 0) && (f % b != 0) && (f % c == 0))
			{
                                a = a / 1;
                                b = b / 1;
                                c = c / f;
                        }
			lcm = lcm * f;
		}
	}
	return (0);
}
