#include "main.h"
int _putchar(char c);
/**
 *print_sign - print the sign of numbers.
 *@n : number.
 *Return:1 or 0,-1;
 */
int print_sign(int n)
{
	char c;

	if (n < 0)
	{
		c = -1;
		_putchar('-');
	}
	else if (n == 0)
	{
		c = 0;
		_putchar('0');
	}
	else
	{
		c = 1;
		_putchar('+');
	}
	return (c);
}
