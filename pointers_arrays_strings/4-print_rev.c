#include "main.h"
int _strlen(char *s);
/**
 * print_rev - print a string in reverse.
 * @s : strring;
 */
void print_rev(char *s)
{
	int i, a;

	a = strlen(s);
	for (i = a - 1; i >= 0; i--)
	{
		_putchar(s[i]);
	}
	_putchar('\n');
}
