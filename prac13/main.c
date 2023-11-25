#include <stdio.h>
#include <stdlib.h>

/**
 * main - Entry point
 *
 * Return: 0 on success
 */

int main(void)
{
	unsigned int a, b, c, d, e, f, lcm = 1;

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
		while (a % f == 0 || b % f == 0 || c % f == 0)
        {
            lcm *= f;

            if (a % f == 0)
                a /= f;
            if (b % f == 0)
                b /= f;
            if (c % f == 0)
                c /= f;
        }
    }

    printf("The LCM is: %d\n", lcm);

    return 0;
}
