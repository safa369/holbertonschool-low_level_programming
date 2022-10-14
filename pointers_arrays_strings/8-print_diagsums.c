#include "main.h"
/**
 * print_diagsums - print the sum of two diagonals.
 * @a: integer;
 * @size: integer;
 */
void print_diagsums(int *a, int size)
{
	int i, sd1, p, sd2;

	sd1 = 0;
	sd2 = 0;
	for (i = 0; i < size; i++)
	{
		p = (i * size) + i;
		sd1 = sd1 + *(a + p);
		p = (i * size) + (size - i - 1);
		sd2 = sd2 + *(a + p);
	}
	printf("%d, %d\n", sd1, sd2);
}
