#include <stdio.h>
/**
 * main - combination of all single digit numbers.
 * Return:0.
 */
int main(void)
{
	int i, j;

	j = 48;
	for (i = 48; i <= 57; i++)
	{
		putchar(i);
		if (i < 57)
		{
		putchar(' ');
		putchar(',');
		}
		while (j <= 57)
		{
			j++;
		}
	}
		putchar('\n');
	return (0);
}
