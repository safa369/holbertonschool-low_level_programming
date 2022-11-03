#include <stdio.h>
#include <stdlib.h>
#include "function_pointers.h"
/**
 * print_name - function that print a name.
 * @name: char;
 * @f: a pointer of a function.
 */
void print_name(char *name, void (*f)(char *))
{
	f(name);
}
