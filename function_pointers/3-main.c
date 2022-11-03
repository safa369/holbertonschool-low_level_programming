#include "3-calc.h"
#include <stdio.h>
#include <stdlib.h>
/**
 * main - main function.
 * àargc: integr;
 * @argv: char;
 * Return: always 0.
 */
int main(int argc, char **argv)
{
	int a, b;
	int (*s)(int, int);

if (argc < 4)
{
	printf("Error\n");
	exit(98);
}
s = get_op_func(argv[2]);
if (s == NULL)
{
	printf("Error\n");
	exit(99);
}
	a = atoi(argv[1]);
	b = atoi(argv[3]);
	printf("%d\n", s(a, b));
	return(0);
}
