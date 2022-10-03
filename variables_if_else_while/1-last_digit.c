#include <stdlib.h>
#include <time.h>
#include <stdio.h>
/**
 * main: last-digit.
 * Return:0;
 */
int main(void)
{
	int n;

	srand(time(0));
	n = rand() - RAND_MAX / 2;
	if (n > 5)
	{
	printf("is %d and is greater than 5\n", n);
	}
	else if (n == 0)
	{
	printf("is %d and is 0\n", n);
	}
	else if (n < 6)
	{
	printf("is %d and is less than 6\n", n);
	}
	return (0);
}
