#include "main.h"
/**
 * _print_rev_recursion - print a string in reverse.
 * @s : char;
 */
void _print_rev_recursion(char *s)
{
	if (*s == '\n')
	{
		_print_rev_recursion(s + 1);
	}
	else if (*s)
	_print_rev_recursion(s + 1);
	_putchar(*s);
}
