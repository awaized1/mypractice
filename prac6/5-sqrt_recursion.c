#include "main.h"
#include <stdio.h>

int actual_recursion(int n, int i);

int _sqrt_recursion(int n)
{
	return (actual_recursion(n, 0));
}

int actual_recursion(int n, int i)
{
	if (i * i != n)
		return (actual_recursion(n, i+1));
	else
		return (i);
}
