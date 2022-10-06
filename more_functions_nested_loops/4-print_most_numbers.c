#include "main.h"
/**
 *print_most_numbers - function print number from 0 to 9;
 */
void print_most_numbers(void)
{
	 char i;

	for (i = 48; i < 58; i++)
	{
		if (i != 50 && i != 52)
		{
		_putchar(i);
		}
	}
	_putchar('\n');
}
