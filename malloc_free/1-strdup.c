#include "main.h"
#include <string.h>
/**
 * _strdup - function return new string
 * @str: char;
 * Return: char;
 */
char *_strdup(char *str)
{
	char *c;
	unsigned int j, a;

	a = strlen(str);
	c = malloc(sizeof(a));
	if (str == NULL)
		return (NULL);
	j = 0;
	c = malloc(a * (sizeof(c) + 1));

	if (c == NULL)
		return (NULL);
	while (j < a)
	{
		c[j] = str[j];
		j++;
	}
	return (c);
}
