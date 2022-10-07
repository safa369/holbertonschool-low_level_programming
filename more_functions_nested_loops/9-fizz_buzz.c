#include "main.h"
/**
 * main - print fizz buzz.
 */
int main(void)
{
	int i, a, b;
	char c1[] = "Fizz", c2[] = "Buzz", c3[] = "FizzBuzz";

	for (i = 1; i <= 100; i++)
	{
		a = i % 3;
		b = i % 5;
		if (a == 0 && b == 0)
		{
			printf("%s", c3);
		}
		else if (b == 0)
		{
			printf("%s", c2);
		}
		else if (a == 0)
			printf("%s", c1);
		else
			printf("%d", i);
		if (i <= 99)
			printf(" ");
	}
	return (0);
}
