#include "main.h"
/**
 * times_table - prints 9 times table.
 * Return: void;
 */
void times_table(void)
{
	int i, j, k, l, a;

	for (i = 0; i <= 9; i++)
	{
		for (j = 0; j <= 9; j++)
		{
			a = i * j;
			k = a % 10;
			l = a / 10;
			if (a < 10)
			{
				_putchar('0' + a);
			}
			else
			{
				_putchar('0' + l);
				_putchar('0' + k);
			}
			if (j < 9)
			{
				_putchar(' ');
				_putchar(',');
			}
		}
		_putchar('\n');
	}
}
