#include "variadic_functions.h"
#include<stdarg.h>
/**
 * sum_them_all - fanction that return th sum of all parametrs.
 * @n: number of arguments;
 * Return: integer;
 */
int sum_them_all(const unsigned int n, ...)
{
	unsigned int i, s = 0;
	va_list nptr;

	if (n == 0)
		return (s);
	va_start(nptr, n);
	for (i = 0; i < n; i++)
		s = s + va_arg(nptr, unsigned int);
	va_end(nptr);
return (s);
}
