#include "main.h"
/**
 * print_diagonal - print diagonal
 * @n: integer;
 */
void print_diagonal(int n)
{
	int b, a;

		a = 0;
		 
		while (n > 0)
		{
		b = a;
			while (b > 0)
			{
				_putchar(' ');
				b = b - 1;
			}
		_putchar('\\');
		_putchar('\n');
		a++;
		n--;
		}
		if (a < 1)
			_putchar('\n');
}
