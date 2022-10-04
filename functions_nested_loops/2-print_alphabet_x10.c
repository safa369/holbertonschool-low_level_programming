#include "main.h"
int _putchar(char c);
/**
 * print_alphabet_x10 - print alphabet 10 times;
 * return: void;
 */
void print_alphabet_x10(void)
{
	int i;
	char c;

	for (i = 0; i <= 10; i++)
	{
		for (c = 'a'; c <= 'z'; c++)
		{
		_putchar(c);
		}
	_putchar('\n');
	}
}
