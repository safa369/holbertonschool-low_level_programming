#include "main.h"
/**
 * times_table - prints 9 times table.
 * Return: void;
 */
void times_table(void)
{
	int i, j, a;

	for (i = 0; i <= 9; i++)
	{
		for (j = 0; j <= 9; j++)
		{
			a = i * j;
			if (a == 0 && j == 0)
				printf("%d,", a);
			else if (j < 9)
			{
				if (a <= 9)
					printf("  %d,", a);
				else
					printf(" %d,", a);
			}
			else
			{
				if (a <= 9)
				printf("  %d", a);
				else
				printf(" %d", a);
			}
		}
			printf("\n");
	}
}
