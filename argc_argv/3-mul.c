#include <stdio.h>
#include <stdlib.h>
/**
 * main - multiplies two numbers.
 * @argc: int;
 * @argv: char;
 * Return: 0;
 */
int main(int argc, char *argv[])
{
	int a, b;

	if (argc < 2)
	{
		printf("ERROR\n");
		return (1);
	}
	else
	{
		a = strtol(argv[1], NULL, 10);
		b = strtol(argv[2], NULL, 10);
		printf("%d\n", a * b);
	}
	return (0);
}
