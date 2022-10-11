#include "main.h"
/**
 * *_strcat - concatenate two, string.
 * @dest: char;
 * @src: char;
 * Return: char
 */
char *_strcat(char *dest, char *src)
{
	int a, b, i, j, k;
	char str[100];

	a = strlen(src);
	b = strlen(dest);

	for (i = 0 ;i < a; i++)
	{
		str[k] = src [i];
		k++
	}
	for(j = 0 ; j < b; j++)
	{
		str[k] = dest[j];
		k++
	}
	str[k] = '\0';
	dest = str;
	return dest;
}

