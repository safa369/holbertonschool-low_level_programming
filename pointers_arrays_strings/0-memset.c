#include "main.h"
/**
 * *_memset - function fills the memory area with a constant.
 * @n: unsigned.
 * @b: char.
 * @s: char.
 * Return: char
 */
char *_memset(char *s, char b, unsigned int n)
{
	unsigned int i;

	for (i = 0; i < n; i++)
		s[i] = b;
	return (s);
}
