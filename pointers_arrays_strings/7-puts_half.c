#include "main.h"
/**
 *puts_half - print half of string;
 *@str: string);
*/
void puts_half(char *str)
{
	int a, i, b;

	a = strlen(str);
	b = a / 2;
	if (b % 2 == 0)
	{
		for (i = b; i < a; i++)
			_putchar(str[i]);
	}
	else
	{
		for (i = b; i < a; i++)
			_putchar(str[i]);
	}
	_putchar('\n');
}
