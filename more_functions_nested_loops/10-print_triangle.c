#include "main.h"
/**
 * print_triangle - print triangle .
 * @size: integer;
 */
void print_triangle(int size)
{
	int i, j, a;

	if (size <= 0)
		_putchar('\n');
	else
	{
	for (i = 0; i < size; i++)
	{
		for (j = size - 1; j > i; j--)
		{
			_putchar(' ');
		}
		for (a = 0; a <= i; a++)
		{
			_putchar('#');
		}
		_putchar('\n');
	}
	}
}
