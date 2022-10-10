#include "main.h"
/**
 * swap_int - swaps the value of two integers.
 * @a: integer;
 * @b: integer;
 */
void swap_int(int *a, int *b)
{
	int m;

	m = *b;
	*b = *a;
	*a = m;
}

