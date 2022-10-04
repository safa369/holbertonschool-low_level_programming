#include <stdio.h>
#include <1-main.c>
int _putchar(char c);
/**
 *print_alphabet - print alphabet.
 * Return:void;
 */
void print_alphabet(void)
{
	char i;

	for (i = 'a'; i <= 'z'; i++)
	{
		_putchar(i);
	}
}
