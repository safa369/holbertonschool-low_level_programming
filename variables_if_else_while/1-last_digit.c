#include <stdlib.h>
#include <time.h>
#include <stdio.h>
/**
 * main: last-digit.
 * Return:0;
 */
int main(void)
{
	int n,u;

	srand(time(0));
	n = rand() - RAND_MAX / 2;
	u = n%10;
	if (n > 5)
	{
	printf("Last digit of %d is %d and is greater than 5\n", n, u);
	}
	else if (n == 0)
	{
	printf("Last digit of %d is 0 and is 0\n", n, n % 10 );
	}
	else if (n < 6)
	{
	printf("Last digit of %d is %d and is less than 6 and not 0\n", n, n % 10 );
	}
	return (0);
}
