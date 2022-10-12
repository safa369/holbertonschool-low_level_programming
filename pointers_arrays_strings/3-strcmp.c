#include "main.h"
/**
 * _strcmp - function compare two string.
 * @s1: char;
 * @s2: char;
 * Return: 0;
 */
int _strcmp(char *s1, char *s2)
{
	int i, r;

	i = 0;
	while (s1[i] == s2[i] && s1[i] != '\0' && s2[i] != '\0')
	{
		i++;
	}
	if (s1[i] == '\0' && s2[i] == '\0')

		r = 0;
	else
		r = *s1 - *s2;
	return (r);
}
