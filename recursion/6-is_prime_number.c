#include "main.h"
/**
 * found_prime - function recursion.
 * @a: integer.
 * @b: integer.
 * return: integer;
 */
int found_prime(int a, int b)
{
	if (a == b)
	return (1);
	if((a % b) != 0)
		return (0);
	return (found_prime(a, b + 1));
}
/**
 * is_prime_number - function verify if a number is prime.
 * @n: integer.
 * Return: 0 or 1;
 */
int is_prime_number(int n)
{

if (n < 2)
{
	return (0);
}
	return (found_prime(n, 2));
}
