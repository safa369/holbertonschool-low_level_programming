#include "main.h"
/**
 * puts2 - print every aother char if a string;
 * @str: string
 */
void puts2(char *str)
{
	int i, a;

	a = strlen(str);
	for (i = 0; i < a; i++)
	{
		if (i % 2 == 0)
		_putchar(str[i]);
	}
	_putchar('\n');
}
