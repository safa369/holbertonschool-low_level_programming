#include "main.h"
/**
 * *_strcat - concatenate two, string.
 * @dest: char;
 * @src: char;
 * Return: char
 */
char *_strcat(char *dest, char *src)
{
	int a, b;
	char str[100];

	a = 0;
	b = 0;
	while(src[a] != '\0')
	{
		str[b] = src [a];
		a++;
		b++;
	}
	a = 0;
	while(dest[a] != '\0')
	{
		str[b] = dest[a];
		a++;
		b++;
	}
	str[b] = '\0';
	dest = str;
	return dest;
}

