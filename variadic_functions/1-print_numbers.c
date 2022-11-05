#include "variadic_functions.h"
/**
 * print_numbers - function print numbers.
 * @separator: char;
 * @n: integer;
 */
void print_numbers(const char *separator, const unsigned int n, ...)
{
	unsigned int i;
	va_list nptr;

	va_start(nptr, n);
		if (separator == NULL)
		{
			for (i = 0; i < n - 1; i++)
				printf("%d", va_arg(nptr, unsigned int));
			printf("\n");
		}
		else
		{
			for (i = 0; i < n - 1; i++)
				printf("%d%s", va_arg(nptr, unsigned int), separator);
			printf("%d\n", va_arg(nptr, unsigned int));
		}
}
