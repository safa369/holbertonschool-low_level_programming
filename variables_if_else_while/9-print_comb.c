#include <stdio.h>
/**
 * main - combination of all single digit numbers.
 * Return:0.
 */
int main(void)
{
	int i, j;

	for (i = 48; i <= 57; i++)
	{
		putchar(i);
		putchar(' ');
		if (i < 57)
		{
		putchar(',');
		for (j = 48; j <= 57; j++)
		{			
		}
		}
	}
	putchar('\n');
	return (0);
}
