#include <stdio.h>
#include <stdlib.h>
#include <string.h>
/**
 * is_a_digit - check if a char is a digit.
 * @c: char;
 * Return: integer;
 */
int is_a_digit(char *c)
{
	int i, a, str;

	i = 0;
	a = 0;
	str = strlen(c);
	while (i < str)
	{
		if (c[i] < '0' || c[i] > '9')
		{
			return (-1);
		}
		else
		a = a * 10 + (c[i] - '0');
		i++;
	}
	return (a);
}
/**
 * main - program add positive numbers.
 * @argv: int;
 * @argc: char;
 * Return: 0 or 1;
 */
int main(int argc, char *argv[])
{
	int i, a, add = 0;

	for (i = 1; i < argc; i++)
	{
		a = is_a_digit(argv[i]);
		if (a == -1)
		{
		printf("Error\n");
		return (1);
		}
		add = add + a;
		}
	printf("%d\n", add);
		return (0);
}
