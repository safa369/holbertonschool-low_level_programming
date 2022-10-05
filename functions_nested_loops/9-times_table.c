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
			if(a == 0 && j == 0)
			{
				_putchar('0' + a);
				_putchar(',');
			}
			else if(j < 9 )
			{
				if (a <= 9)
				{
					_putchar(' ');	
					_putchar(' ');
					_putchar('0' + a);
					_putchar(',');
				}
				else
				{
					_putchar(' ');
					_putchar('0' + l);
					_putchar('0' + k);
					_putchar(',');
				}
			}
			else
			{
				if (a <= 9)
				{
					_putchar(' ');
					_putchar(' ');
					_putchar('0' + a);
				}
				else
				{
					_putchar(' ');
					_putchar('0' + l);
					_putchar('0' + k);
				}
			}
			}
			_putchar('\n');
	}
}
