#include "main.h"
/**
 * print_diagonal - print diagonal
 * @n: integer;
 */
void print_diagonal(int n)
{
	int i, a;

	if (n <= 0)
		_putchar('\n');
	else
	{
		a = 0;
		while (a < n)
		{
		a++;
		for (i = 0; i < a; i++)
		{
		_putchar(' ');
		}
		_putchar('\\');
		_putchar('\n');
		}

}
}
