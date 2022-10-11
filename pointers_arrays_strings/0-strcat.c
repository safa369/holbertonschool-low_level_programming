#include "main.h"
/**
 * *_strcat - concatenate two, string.
 * @dest: char;
 * @src: char;
 * Return: char
 */
char *_strcat(char *dest, char *src)
{
	char *c;
	
	c = dest;
	while (*dest != '\0')
	{
		*c = *dest;
		c++;
		dest++;
	}
	while (*src != '\0')
	{
		*c = *src;
		c++;
		src++;
	}
	*c = '\0';

	return(c);
}

