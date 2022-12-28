#include "main.h"
#include <stdio.h>
#include <string.h>
/**
 * binary_to_uint - function that convert binary number to uint.
 * @b: the number to convert .
 * Return: the converted number or 0.
 */
unsigned int binary_to_uint(const char *b)
{
	unsigned int i = 0;
	int c;

	if (b == NULL)
		return (0);
	for (c = 0; b[c]; c++)
	{
		if (b[c] != '0' && b[c] != '1')
			return (0);
		i = 2 * i + (b[c] - '0');
	}
	return (i);
}
