#include "main.h"
/**
 * *_strcat - concatenate two, string.
 * @dest: char;
 * @src: char;
 * Return: char
 */
char *_strcat(char *dest, char *src)
{

	int i, j;

	j = strlen(src);
	for (i = 0; i < j; i++)
	{
		*(dest + j + i) = *src;
		src++;
	}
	return (dest);
}
