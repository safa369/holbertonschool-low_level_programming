#include "main.h"
/**
 *print_times_table - print table n times;
 *@n :integer.
*/
void print_times_table(int n)
{
	int i, j, a;

if (n < 0 && n > 15)
{
	printf("\n");
}
	else
	{
	for (i = 0; i <= n; i++)
	{
		for (j = 0; j <= n; j++)
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
}
