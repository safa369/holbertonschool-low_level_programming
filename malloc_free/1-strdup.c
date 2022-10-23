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
	unsigned int j, i;

	
	if (str == NULL)
		return (NULL);
	j = 0;
	i = 0;
	while (str[i] != '\0')
		i++;
	c = malloc((i + 1) * sizeof(c));

	if (c == NULL)
		return (NULL);
	while (j < i)
	{
		c[j] = str[j];
		j++;
	}
	return (c);
}
