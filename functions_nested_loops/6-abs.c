#include "main.h"
#include <stdlib.h>
/**
 * _abs - absolute value of an integer.
 * @n: integer;
 * Return: int.
 */
int _abs(int n)
{
	int c;

	if (n < 0)
	{
	c = abs(n);
	}
	else
		c = n;
	return (c);
}
