#include "main.h"
/**
 * str_concat - function concatenate two char.
 * @s1: char;
 * @s2: char;
 * Return: char;
 */
char *str_concat(char *s1, char *s2)
{
	char *c;
	unsigned int i, j, a, b;

	if (*s1 == NULL)
	       s1 = "";
	if (*s2 == NULL)
		s2 = "";
	i = 0;
	j = 0;
	while (s1[i] != '\0')
		i++;
	while (s2[j] != '\0')
		j++;
	c = malloc((i + j + 1) * sizeof(*c));
	if (c == NULL)
		return (NULL);
	a = 0;
	b = 0;
	while (s1[a] != '\0')
	{
		c[a] = s1[a];
		a++;
	}
	while (s2[b] != '\0')
	{
		c[a] = s2[b];
		a++;
		b++;
	}
	c[a] = '\0';
	return (c);
}
