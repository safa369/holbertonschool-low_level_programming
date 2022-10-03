#include <stdio.h>
/**
 * main - print combination;
 * Return:0;
 */
int main(void)
{
	int i, j;

	for (i = 48; i <= 57; i++)
	{
		j = i+1;
		while (j <= 57)
		{
		putchar(i);
		putchar(j);
		j++;
		putchar(',');
		putchar(' ');
		}
	}

	putchar('\n');
	return (0);
}

