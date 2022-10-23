#include <stdio.h>
/**
 * sqrt_main - square number .
 * @a: integer;
 * @b: integer;
 * Return: integer;
 */
int sqrt_main(int a, int b)
{
	if (a == (b * b))
		return (b);
	else if (a > (b * b))
		return (sqrt_main(a, b + 1));
	else
		return (-1);
}
/**
 * _sqrt_recursion - function return the square root.
 * @n: integer;
 * Return: integer;
 */
int _sqrt_recursion(int n)
{
	if (n == 0)
		return (0);
	if (n == 1)
		return (1);
	if (n < 0)
	return (-1);
	return (sqrt_main(n, 1));
}
