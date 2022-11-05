#include "variadic_functions.h"
/**
 * print_strings - function print strings.
 * @separator: char;
 * @n: unsigned int;
 */
void print_strings(const char *separator, const unsigned int n, ...)
{
	unsigned int i;
	char *str;
	va_list nptr;

	va_start(nptr, n);
	if (n > 0)
	{
		if (separator == NULL)
		{
			for (i = 0; i < n; i++)
			{
				str = va_arg(nptr, char*);
				if (str != NULL)
				printf("%s", str);
				else
					printf("nil");
			}
			printf("\n");
		}
		else
		{
			for (i = 0; i < n - 1; i++)
			{
				str = va_arg(nptr, char*);
				if (str != NULL)
					printf("%s%s", str, separator);
				else
					printf("nil%s", separator);
			}
			str = va_arg(nptr, char*);
			if (str != NULL)
				printf("%s\n", str);
			else
			printf("nil\n");
		}
	}
va_end(nptr);
}
