#include "main.h"
/**
 * reverse_array - reverse array of integer.
 * @a: integer;
 * @n: integer;
 */
void reverse_array(int *a, int n)
{
	int b[50], i;

	for (i = 0; i < n; i++)
	{
	b[i] = a[n - i - 1];
	}
	for (i = 0; i < n; i++)
		a[i] = b[i];
}
