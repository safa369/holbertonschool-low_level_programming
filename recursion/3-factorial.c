#include "main.h"
/**
 * factorial - function return factorial of integer.
 * @n : integer;
 * Return: integer;
 */
int factorial(int n)
{
	if (n < 0)
	{
		return (-1);
	}
	else if (n == 0)
	{
		return (1);
	}
	else
	{
		return (n * factorial(n - 1));
	}
}
