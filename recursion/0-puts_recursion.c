#include "main.h"
/**
 * _puts_recursion - function print a string.
 * @s: char;
 */
void _puts_recursion(char *s)
{
	int i, a;

	a = strlen(s);
	for (i = 0; i < a; i++)
	{
		_putchar(*(s+i));
	}
	_putchar('\n');
}
