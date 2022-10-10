#include "main.h"
/**
 * _puts - function print a string.
 * @str: string;
 */
void _puts(char *str)
{
int a, i;

a = strlen(str);
for (i = 0 ; i <= a; i--)
	_putchar(str[i] + '0');

}
