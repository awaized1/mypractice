#include "function_pointers.h"
#include <stdio.h>
#include <stdlib.h>

void print_name(char *name, void (*f)(char *))
{
	f(name);
}
