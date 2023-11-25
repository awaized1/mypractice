#include <stdio.h>
#include <stdarg.h>
#include "variadic_functions.h"

int sum_them_all(const unsigned int n, ...)
{
	va_list sum;
	unsigned int i, a = 0;
	
	va_start(sum, n);
	for (i = 0; i < n; i++)
		a = a + va_arg(sum, int);
	va_end (sum);
	return (a);
}
