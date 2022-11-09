#include "variadic_functions.h"
/**
 * print_all - function print all argument found in format.
 * @format: string;
 */
void print_all(const char * const format, ...)
{
	int i = 0, n = 0;
	char *separator;
	char *string;
	va_list ptr;

	separator = ",";
	va_start (ptr, format);
	while (format[i])
		i++;
	while (format && n <= i - 1)
	{
		if (n == (i - 1))
			separator = " ";
	switch(format[n])
	{
		case 'c':
		printf("%c%s", va_arg(ptr, int), separator);
		break;
		case 'i':
		printf("%d%s", va_arg(ptr, int), separator);
		break;
		case 'f':
		printf("%f%s", va_arg(ptr, double), separator);
		break;
		case 's':
		{
			string = va_arg(ptr, char *);
			if (string == NULL)
				printf("(nil)%s",separator);
			printf("%s%s", string, separator);
		}
		break;
	}
	n++;
	}
	printf("\n");
	va_end(ptr);
}
