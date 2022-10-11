#include "main.h"
/**
 * *_strcat - concatenate two, string.
 * @dest: char;
 * @src: char;
 * Return: char
 */
char *_strcat(char *dest, char *src)
{
	int  i, k;
	char str[100];

	k = 0;
	i = 0;
	while (dest[i] != '\0')
	{
		str[k] = dest[i];
		k++;
		i++;
	}
	i = 0;
	while (src[i] != '\0')
	{
		str[k] = src[i];
		k++;
		i++;
	}
	str[k] = '\0';
	dest = str;
	return (dest);
}

